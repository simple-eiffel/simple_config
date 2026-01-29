# EnvSentinel - Technical Design

**Version:** 1.0
**Status:** Design Complete

---

## Architecture

### Component Overview

```
+----------------------------------------------------------+
|                      EnvSentinel                          |
+----------------------------------------------------------+
|  CLI Interface Layer                                      |
|    - Argument parsing (simple_cli)                        |
|    - Command routing                                      |
|    - Output formatting (text, json, report)               |
+----------------------------------------------------------+
|  Business Logic Layer                                     |
|    - ENV_SENTINEL_ENGINE (orchestration)                  |
|    - POLICY_VALIDATOR (rule enforcement)                  |
|    - DRIFT_DETECTOR (environment comparison)              |
|    - SECURITY_SCANNER (risk analysis)                     |
|    - COMPLIANCE_REPORTER (framework reports)              |
+----------------------------------------------------------+
|  Integration Layer                                        |
|    - simple_config (config file access)                   |
|    - simple_env (environment variable access)             |
|    - simple_validation (rule engine)                      |
|    - simple_logger (audit logging)                        |
|    - simple_encryption (sensitive value handling)         |
+----------------------------------------------------------+
|  Data Layer                                               |
|    - Policy definition files (JSON)                       |
|    - Environment snapshots                                |
|    - Audit log storage                                    |
|    - Compliance framework definitions                     |
+----------------------------------------------------------+
```

### Class Design

| Class | Responsibility | Key Features |
|-------|----------------|--------------|
| ENV_SENTINEL_CLI | Command-line interface | parse_args, route_command, format_output |
| ENV_SENTINEL_ENGINE | Core orchestration | validate, detect_drift, scan_security, generate_report |
| POLICY_VALIDATOR | Policy rule enforcement | load_policy, validate_environment, report_violations |
| DRIFT_DETECTOR | Environment comparison | snapshot_env, compare_snapshots, categorize_drift |
| SECURITY_SCANNER | Risk analysis | scan_for_secrets, check_patterns, risk_assessment |
| COMPLIANCE_REPORTER | Framework reports | load_framework, evaluate_controls, generate_report |
| AUDIT_LOGGER | Change tracking | log_validation, log_change, query_history |
| ENV_SNAPSHOT | Environment state capture | capture_current, load_from_file, compare_to |

---

## Command Structure

```bash
env-sentinel <command> [options] [arguments]

Commands:
  validate    Validate environment against policy
  drift       Detect drift between environments
  scan        Security scan for risks and exposures
  compliance  Generate compliance report
  snapshot    Capture environment snapshot
  history     View audit history
  watch       Monitor for changes (daemon mode)

Global Options:
  --policy FILE      Policy definition file
  --env ENV          Target environment name
  --output FORMAT    Output format: text (default), json, html, pdf
  --verbose          Verbose output with details
  --quiet            Suppress all output except errors
  --ci               CI mode (machine-readable output, exit codes)
  --help             Show help for command
  --version          Show version information
```

### Command Details

#### validate
```bash
env-sentinel validate [options]

Options:
  --policy FILE        Policy definition file (required)
  --env ENV            Environment to validate (default: current)
  --source SOURCE      Source: env (default), file, remote
  --config FILE        Config file to validate (with --source file)
  --fail-on-warning    Exit non-zero on warnings (default: errors only)
  --ignore KEY         Ignore specific keys
  --ci                 CI mode output

Examples:
  env-sentinel validate --policy policies.json
  env-sentinel validate --policy policies.json --env production --ci
  env-sentinel validate --policy policies.json --source file --config app.json
```

#### drift
```bash
env-sentinel drift [options] <env1> <env2>

Options:
  --policy FILE        Policy to determine expected differences
  --snapshot-dir DIR   Directory with environment snapshots
  --fail-on-drift      Exit non-zero if drift detected
  --ignore-expected    Ignore expected differences (from policy)
  --output FILE        Write report to file

Examples:
  env-sentinel drift staging production
  env-sentinel drift dev staging --policy policies.json --ignore-expected
  env-sentinel drift --snapshot-dir ./snapshots staging production
```

#### scan
```bash
env-sentinel scan [options]

Options:
  --env ENV            Environment to scan (default: current)
  --rules FILE         Custom security rules file
  --severity LEVEL     Minimum severity: low, medium, high, critical
  --fail-on LEVEL      Exit non-zero if issues at or above level
  --output FILE        Write report to file

Examples:
  env-sentinel scan
  env-sentinel scan --env production --severity high
  env-sentinel scan --fail-on medium --ci
```

#### compliance
```bash
env-sentinel compliance [options]

Options:
  --framework NAME     Compliance framework: soc2, hipaa, pci-dss, iso27001
  --env ENV            Environment to evaluate
  --controls FILE      Custom controls definition
  --output FILE        Output file (supports .html, .pdf, .json)
  --evidence-dir DIR   Directory to store evidence

Examples:
  env-sentinel compliance --framework soc2 --env production
  env-sentinel compliance --framework hipaa --output report.pdf
  env-sentinel compliance --controls custom-controls.json
```

#### snapshot
```bash
env-sentinel snapshot [options]

Options:
  --env ENV            Environment name for snapshot
  --output FILE        Output file (default: <env>-<timestamp>.json)
  --include-values     Include actual values (caution: may expose secrets)
  --hash-secrets       Hash secret values instead of including them
  --filter PATTERN     Only include keys matching pattern

Examples:
  env-sentinel snapshot --env production
  env-sentinel snapshot --env staging --hash-secrets
  env-sentinel snapshot --env dev --include-values --filter "^APP_"
```

#### history
```bash
env-sentinel history [options]

Options:
  --env ENV            Filter by environment
  --since DATE         Show history since date
  --until DATE         Show history until date
  --key KEY            Filter by specific key
  --event TYPE         Filter by event type: validation, change, violation

Examples:
  env-sentinel history --env production --since 2026-01-01
  env-sentinel history --key DATABASE_URL
  env-sentinel history --event violation --since "7 days ago"
```

---

## Data Flow

```
                          +-------------+
                          |   CLI Args  |
                          +------+------+
                                 |
                                 v
+----------------+     +------------------+     +----------------+
| Policy File    | --> | POLICY_VALIDATOR | --> | Validation     |
|                |     +------------------+     | Report         |
+----------------+            |                 +----------------+
                              |
+----------------+            v                 +----------------+
| Environment    | --> +------------------+ --> | Drift Report   |
| Snapshots      |     | DRIFT_DETECTOR   |     |                |
+----------------+     +------------------+     +----------------+
                              |
                              v
+----------------+     +------------------+     +----------------+
| Security Rules | --> | SECURITY_SCANNER | --> | Risk Report    |
|                |     +------------------+     |                |
+----------------+                              +----------------+
                                                       |
+----------------+     +------------------+            v
| Framework Def  | --> | COMPLIANCE_      | --> +----------------+
|                |     | REPORTER         |     | Compliance     |
+----------------+     +------------------+     | Report         |
                                                +----------------+
                                                       |
                              +------------------------+
                              |
                              v
                       +------------------+
                       |  AUDIT_LOGGER    |
                       +--------+---------+
                                |
                                v
                       +------------------+
                       |  Output (stdout, |
                       |  file, or remote)|
                       +------------------+
```

---

## Policy Schema

### Policy Definition Format

```json
{
  "$schema": "env-sentinel-policy-v1",
  "meta": {
    "name": "Production Security Policy",
    "version": "1.0",
    "environments": ["staging", "production"]
  },
  "variables": {
    "DATABASE_URL": {
      "required": true,
      "sensitivity": "secret",
      "pattern": "^postgres://.*@.*:[0-9]+/.*$",
      "description": "PostgreSQL connection string"
    },
    "LOG_LEVEL": {
      "required": true,
      "type": "enum",
      "allowed_values": ["debug", "info", "warn", "error"],
      "environment_rules": {
        "production": {
          "allowed_values": ["warn", "error"],
          "reason": "Debug/info logging exposes sensitive data"
        }
      }
    },
    "API_RATE_LIMIT": {
      "required": true,
      "type": "integer",
      "min": 100,
      "max": 10000,
      "environment_rules": {
        "production": { "min": 1000 }
      }
    },
    "DEBUG_MODE": {
      "required": false,
      "type": "boolean",
      "environment_rules": {
        "production": {
          "forbidden": true,
          "reason": "Debug mode must not be enabled in production"
        }
      }
    },
    "FEATURE_*": {
      "pattern_match": true,
      "type": "boolean",
      "required": false,
      "description": "Feature flags"
    }
  },
  "security_rules": {
    "no_plaintext_secrets": {
      "patterns": ["password", "secret", "key", "token"],
      "action": "warn_if_not_encrypted"
    },
    "no_debug_production": {
      "variables": ["DEBUG", "DEBUG_MODE", "VERBOSE"],
      "forbidden_in": ["production"],
      "severity": "high"
    }
  },
  "expected_drift": {
    "staging_vs_production": {
      "allowed_differences": [
        "LOG_LEVEL",
        "DB_POOL_SIZE",
        "CACHE_SIZE"
      ],
      "value_scaling": {
        "DB_POOL_SIZE": { "production_multiplier": 10 },
        "CACHE_SIZE": { "production_multiplier": 5 }
      }
    }
  }
}
```

---

## Error Handling

| Error Type | Handling | User Message |
|------------|----------|--------------|
| Policy not found | Exit code 1 | "Error: Policy file not found: {path}" |
| Invalid policy JSON | Exit code 2 | "Error: Invalid policy at line {n}: {detail}" |
| Environment not accessible | Exit code 3 | "Error: Cannot access environment: {reason}" |
| Validation failure | Exit code 10 | Lists all violations |
| Drift detected | Exit code 20 | Lists all drift items |
| Security issues found | Exit code 30 | Lists all security findings |
| Compliance failure | Exit code 40 | Lists failed controls |

### Exit Codes

| Code | Meaning |
|------|---------|
| 0 | Success (no issues) |
| 1 | Policy/config file not found |
| 2 | Invalid policy/config format |
| 3 | Environment access error |
| 10 | Validation errors found |
| 11 | Validation warnings (with --fail-on-warning) |
| 20 | Drift detected (with --fail-on-drift) |
| 30 | Security issues at threshold |
| 40 | Compliance control failures |
| 99 | Unknown error |

---

## GUI/TUI Future Path

**CLI foundation enables:**

1. **Security Dashboard (GUI)**
   - Real-time environment health overview
   - Policy violation alerts
   - Drift visualization with timeline
   - Compliance status dashboard

2. **Terminal Monitor (TUI)**
   - Live environment watch
   - Interactive policy editor
   - Diff viewer with approve/reject
   - Quick security scan results

3. **Shared Components Between CLI/GUI**
   - Policy engine is UI-agnostic
   - Drift detection reusable
   - Report generation decoupled from presentation
   - Audit log queries work for any interface

4. **Web Interface Potential**
   - CLI JSON output feeds web dashboards
   - Same engine powers REST API
   - Real-time WebSocket alerts possible
   - Compliance report PDF generation
