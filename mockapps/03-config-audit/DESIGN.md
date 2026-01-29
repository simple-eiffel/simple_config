# ConfigAudit - Technical Design

**Version:** 1.0
**Status:** Design Complete

---

## Architecture

### Component Overview

```
+----------------------------------------------------------+
|                      ConfigAudit                          |
+----------------------------------------------------------+
|  CLI Interface Layer                                      |
|    - Argument parsing (simple_cli)                        |
|    - Command routing                                      |
|    - Output formatting (text, json, html, pdf)            |
+----------------------------------------------------------+
|  Business Logic Layer                                     |
|    - CONFIG_AUDIT_ENGINE (orchestration)                  |
|    - BASELINE_MANAGER (baseline definitions)              |
|    - CONFIG_COMPARATOR (actual vs expected)               |
|    - EVIDENCE_COLLECTOR (config gathering)                |
|    - REPORT_GENERATOR (compliance reports)                |
|    - TREND_ANALYZER (historical analysis)                 |
+----------------------------------------------------------+
|  Integration Layer                                        |
|    - simple_config (config file access)                   |
|    - simple_json (baseline/report schemas)                |
|    - simple_diff (comparison engine)                      |
|    - simple_template (report templates)                   |
|    - simple_csv (export capabilities)                     |
+----------------------------------------------------------+
|  Data Layer                                               |
|    - Baseline definition files (JSON)                     |
|    - Collected evidence (JSON snapshots)                  |
|    - Audit history (SQLite via simple_sql)                |
|    - Report templates                                     |
+----------------------------------------------------------+
```

### Class Design

| Class | Responsibility | Key Features |
|-------|----------------|--------------|
| CONFIG_AUDIT_CLI | Command-line interface | parse_args, route_command, format_output |
| CONFIG_AUDIT_ENGINE | Core orchestration | compare, collect, report, trend |
| BASELINE_MANAGER | Baseline operations | load, create, update, validate |
| COMPLIANCE_BASELINE | Baseline data structure | settings, controls, severity, rationale |
| CONFIG_COMPARATOR | Comparison engine | compare_to_baseline, categorize_findings |
| AUDIT_FINDING | Finding data structure | setting, expected, actual, severity, control |
| EVIDENCE_COLLECTOR | Config gathering | collect_from_file, collect_from_systems |
| REPORT_GENERATOR | Report creation | generate_text, generate_html, generate_pdf |
| TREND_ANALYZER | Historical analysis | analyze_period, calculate_velocity |

---

## Command Structure

```bash
config-audit <command> [options] [arguments]

Commands:
  compare     Compare actual configuration against baseline
  collect     Collect configuration evidence from systems
  report      Generate compliance audit report
  baseline    Manage compliance baselines
  trend       Analyze compliance trends over time
  remediate   Generate remediation plan for findings

Global Options:
  --baseline FILE    Baseline definition file
  --output FORMAT    Output format: text (default), json, html, pdf, csv
  --verbose          Verbose output with details
  --quiet            Suppress all output except errors
  --ci               CI mode (machine-readable, exit codes)
  --help             Show help for command
  --version          Show version information
```

### Command Details

#### compare
```bash
config-audit compare [options] <config-file>

Options:
  --baseline FILE    Baseline to compare against (required)
  --severity LEVEL   Minimum severity to report: low, medium, high, critical
  --control CTRL     Filter by specific control (e.g., CC6.1)
  --fail-on LEVEL    Exit non-zero if findings at or above level
  --output FILE      Write results to file
  --format FORMAT    Output format (text, json, csv)

Examples:
  config-audit compare app.json --baseline production.json
  config-audit compare app.json --baseline production.json --severity high
  config-audit compare app.json --baseline production.json --fail-on critical --ci
```

#### collect
```bash
config-audit collect [options]

Options:
  --systems FILE     Systems definition file (hosts, paths)
  --output DIR       Output directory for evidence
  --source TYPE      Source type: file (default), ssh, api
  --parallel N       Parallel collection (default: 5)
  --verify           Verify collected configs parse correctly

Examples:
  config-audit collect --systems systems.json --output evidence/
  config-audit collect --systems systems.json --source ssh --parallel 10
```

#### report
```bash
config-audit report [options]

Options:
  --baseline FILE    Baseline definition (required)
  --evidence DIR     Evidence directory (required)
  --framework NAME   Compliance framework: soc2, hipaa, pci-dss, iso27001
  --output FILE      Output file (extension determines format)
  --template FILE    Custom report template
  --include-passing  Include passing settings in report

Examples:
  config-audit report --baseline prod.json --evidence evidence/ --output audit.pdf
  config-audit report --baseline prod.json --evidence evidence/ --framework soc2
  config-audit report --baseline prod.json --evidence evidence/ --template custom.html
```

#### baseline
```bash
config-audit baseline <subcommand> [options]

Subcommands:
  create    Create new baseline from config file
  validate  Validate baseline definition
  update    Update baseline with new settings
  diff      Compare two baselines

Examples:
  config-audit baseline create app.json --name "Production v1" --output baseline.json
  config-audit baseline validate baseline.json
  config-audit baseline diff baseline-v1.json baseline-v2.json
```

#### trend
```bash
config-audit trend [options]

Options:
  --baseline NAME    Baseline name to analyze
  --period PERIOD    Analysis period: 7d, 30d, 90d, 1y
  --output FILE      Write trend data to file
  --format FORMAT    Output format (text, json, csv)

Examples:
  config-audit trend --baseline production --period 90d
  config-audit trend --baseline production --period 1y --format csv
```

#### remediate
```bash
config-audit remediate [options] <findings-file>

Options:
  --priority LEVEL   Prioritize by: severity, control, effort
  --output FILE      Write remediation plan to file
  --format FORMAT    Output format (text, json, markdown)
  --assignee USER    Default assignee for tasks

Examples:
  config-audit remediate findings.json --priority severity
  config-audit remediate findings.json --output plan.md --format markdown
```

---

## Data Flow

```
                          +-------------+
                          |   CLI Args  |
                          +------+------+
                                 |
                                 v
+----------------+     +------------------+
| Baseline File  | --> | BASELINE_MANAGER | ---+
|                |     +------------------+    |
+----------------+                             |
                                               v
+----------------+     +------------------+     +------------------+
| Actual Config  | --> | CONFIG_COMPARATOR| --> | AUDIT_FINDINGS   |
| (or Evidence)  |     +------------------+     +--------+---------+
+----------------+                                      |
                                                        v
+----------------+     +------------------+     +----------------+
| Systems Def    | --> | EVIDENCE_        | --> | Evidence Files |
|                |     | COLLECTOR        |     |                |
+----------------+     +------------------+     +----------------+
                                                        |
                                                        v
+----------------+     +------------------+     +----------------+
| Report         | --> | REPORT_          | --> | Audit Report   |
| Template       |     | GENERATOR        |     | (PDF/HTML)     |
+----------------+     +------------------+     +----------------+
                                                        |
                              +------------------------+
                              |
                              v
+----------------+     +------------------+
| Audit History  | <-- | AUDIT_STORE      |
| (SQLite)       |     +------------------+
+----------------+            |
                              v
                       +------------------+
                       | TREND_ANALYZER   |
                       +--------+---------+
                                |
                                v
                       +------------------+
                       | Trend Report     |
                       +------------------+
```

---

## Baseline Schema

### Baseline Definition Format

```json
{
  "$schema": "config-audit-baseline-v1",
  "baseline": {
    "name": "Production Web Application",
    "version": "2.1",
    "created": "2026-01-15",
    "updated": "2026-01-24",
    "framework": "soc2",
    "controls_covered": ["CC6.1", "CC6.6", "CC7.1", "CC7.2"],
    "settings": {
      "security.ssl_enabled": {
        "expected": true,
        "type": "boolean",
        "control": "CC6.1",
        "severity": "critical",
        "rationale": "Data must be encrypted in transit per SOC2 CC6.1",
        "remediation": "Set ssl_enabled to true in security section"
      },
      "security.tls_version": {
        "expected": "1.3",
        "alternatives": ["1.2"],
        "type": "string",
        "control": "CC6.1",
        "severity": "high",
        "rationale": "TLS 1.2+ required for secure communications"
      },
      "session.timeout_minutes": {
        "expected": 30,
        "max": 60,
        "type": "integer",
        "control": "CC6.6",
        "severity": "high",
        "rationale": "Session timeout limits unauthorized access window"
      },
      "logging.audit_enabled": {
        "expected": true,
        "type": "boolean",
        "control": "CC7.1",
        "severity": "critical",
        "rationale": "Audit logging required for accountability"
      },
      "logging.retention_days": {
        "expected": 90,
        "min": 90,
        "type": "integer",
        "control": "CC7.1",
        "severity": "medium",
        "rationale": "Logs must be retained for 90+ days"
      }
    },
    "setting_groups": {
      "encryption": ["security.ssl_enabled", "security.tls_version"],
      "access_control": ["session.timeout_minutes"],
      "audit_trail": ["logging.audit_enabled", "logging.retention_days"]
    }
  }
}
```

### Finding Report Format

```json
{
  "audit": {
    "baseline": "Production Web Application v2.1",
    "framework": "soc2",
    "timestamp": "2026-01-24T10:30:00Z",
    "system": "web-server-01",
    "summary": {
      "total_settings": 25,
      "compliant": 22,
      "non_compliant": 3,
      "compliance_percentage": 88.0
    },
    "findings": [
      {
        "id": "F-001",
        "setting": "security.ssl_enabled",
        "expected": true,
        "actual": false,
        "severity": "critical",
        "control": "CC6.1",
        "status": "non_compliant",
        "rationale": "Data must be encrypted in transit per SOC2 CC6.1",
        "remediation": "Set ssl_enabled to true in security section",
        "evidence_ref": "evidence/web-server-01.json:line:15"
      }
    ],
    "compliant_settings": [
      {
        "setting": "logging.audit_enabled",
        "expected": true,
        "actual": true,
        "control": "CC7.1",
        "status": "compliant"
      }
    ]
  }
}
```

---

## Error Handling

| Error Type | Handling | User Message |
|------------|----------|--------------|
| Baseline not found | Exit code 1 | "Error: Baseline file not found: {path}" |
| Invalid baseline | Exit code 2 | "Error: Invalid baseline at {location}: {detail}" |
| Config parse error | Exit code 3 | "Error: Cannot parse config {file}: {detail}" |
| Collection failure | Exit code 4 | "Error: Failed to collect from {system}: {reason}" |
| Report generation error | Exit code 5 | "Error: Report generation failed: {detail}" |
| Compliance failure | Exit code 10 | Lists all non-compliant findings |

### Exit Codes

| Code | Meaning |
|------|---------|
| 0 | Success (100% compliant or operation complete) |
| 1 | Baseline/config file not found |
| 2 | Invalid baseline/config format |
| 3 | Config parse error |
| 4 | Evidence collection failure |
| 5 | Report generation error |
| 10 | Critical findings found |
| 11 | High findings found (with --fail-on high) |
| 12 | Medium findings found (with --fail-on medium) |
| 99 | Unknown error |

---

## GUI/TUI Future Path

**CLI foundation enables:**

1. **Compliance Dashboard (GUI)**
   - Real-time compliance posture overview
   - Drill-down into findings by system/control
   - Visual trend charts
   - Remediation workflow management

2. **Terminal Interface (TUI)**
   - Interactive baseline editor
   - Side-by-side comparison view
   - Finding browser with filters
   - Quick remediation tracking

3. **Shared Components Between CLI/GUI**
   - Comparison engine is UI-agnostic
   - Report generation decoupled
   - Finding data structures reusable
   - Trend calculations independent

4. **Web Interface Potential**
   - REST API wrapping CLI functions
   - Real-time compliance monitoring
   - Multi-tenant audit management
   - Integration with ticketing systems
