# ConfigAudit - Build Plan

**Version:** 1.0
**Status:** Design Complete

---

## Phase Overview

| Phase | Deliverable | Effort | Dependencies |
|-------|-------------|--------|--------------|
| Phase 1 | MVP CLI (compare, baseline) | 5 days | simple_config, simple_cli, simple_diff |
| Phase 2 | Full CLI (report, collect, trend) | 6 days | Phase 1 + simple_template, simple_csv, simple_sql |
| Phase 3 | Production Polish | 4 days | Phase 2 complete |

---

## Phase 1: MVP

### Objective

Deliver a functional CLI that can compare actual configurations against compliance baselines and manage baseline definitions. This proves the core value proposition: automated configuration compliance auditing.

### Deliverables

1. **CONFIG_AUDIT_CLI** - Main entry point with command routing
2. **CONFIG_AUDIT_ENGINE** - Core orchestration class
3. **BASELINE_MANAGER** - Baseline operations
4. **COMPLIANCE_BASELINE** - Baseline data structure
5. **BASELINE_SETTING** - Setting definition
6. **CONFIG_COMPARATOR** - Comparison engine
7. **AUDIT_RESULT** - Comparison results
8. **AUDIT_FINDING** - Individual finding
9. **Basic CLI** - `compare` and `baseline` commands

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T1.1 | Create project structure with ECF | Compiles with all dependencies |
| T1.2 | Implement CONFIG_AUDIT_CLI skeleton | Parses `--help` and `--version` |
| T1.3 | Implement BASELINE_MANAGER.load | Loads JSON baseline files |
| T1.4 | Implement COMPLIANCE_BASELINE | Stores settings with controls, severity |
| T1.5 | Implement BASELINE_SETTING | Type, expected, min/max, alternatives |
| T1.6 | Implement CONFIG_COMPARATOR | Compares actual vs baseline |
| T1.7 | Implement AUDIT_RESULT | Findings and compliant collections |
| T1.8 | Implement `compare` command | Outputs findings, exit codes |
| T1.9 | Implement `baseline create` subcommand | Creates baseline from config |
| T1.10 | Implement `baseline validate` subcommand | Validates baseline JSON |
| T1.11 | Write unit tests | 90% coverage of core logic |

### Test Cases (Phase 1)

| Test | Input | Expected Output |
|------|-------|-----------------|
| Compare 100% compliant | Matching config + baseline | Exit 0, "100% compliant" |
| Compare with critical | Missing critical setting | Exit 10, critical finding |
| Compare with high | Wrong value for high setting | Exit 11, high finding |
| Compare range violation | Value outside min/max | Finding with range error |
| Compare alternatives | Value in alternatives list | Compliant |
| Baseline create | Actual config | Baseline JSON with settings |
| Baseline validate valid | Valid baseline JSON | Exit 0, "Valid" |
| Baseline validate invalid | Missing required fields | Exit 2, error details |

### Phase 1 Class Structure

```eiffel
-- src/config_audit_cli.e
class CONFIG_AUDIT_CLI
create make
feature
    make
    register_commands
    do_compare
    do_baseline_create
    do_baseline_validate
end

-- src/config_audit_engine.e
class CONFIG_AUDIT_ENGINE
create make
feature
    baseline_manager: BASELINE_MANAGER
    comparator: CONFIG_COMPARATOR
    load_baseline (path)
    compare (config_path): AUDIT_RESULT
end

-- src/baseline/baseline_manager.e
class BASELINE_MANAGER
create make
feature
    load (path): COMPLIANCE_BASELINE
    create_from_config (config_path, name): COMPLIANCE_BASELINE
    validate (path): VALIDATION_RESULT
    save (baseline, path)
end

-- src/baseline/compliance_baseline.e
class COMPLIANCE_BASELINE
create make
feature
    name: STRING
    version: STRING
    framework: STRING
    controls: ARRAYED_LIST [STRING]
    settings: HASH_TABLE [BASELINE_SETTING, STRING]
    add_setting (setting)
end

-- src/baseline/baseline_setting.e
class BASELINE_SETTING
create make, make_from_config
feature
    key: STRING
    expected_value: STRING
    type: STRING
    severity: STRING
    control: STRING
    rationale: STRING
    remediation: STRING
    min_value: INTEGER
    max_value: INTEGER
    alternatives: ARRAYED_LIST [STRING]
    pattern: detachable STRING
end

-- src/comparison/config_comparator.e
class CONFIG_COMPARATOR
create make
feature
    compare_to_baseline (actual, baseline): AUDIT_RESULT
end

-- src/comparison/audit_result.e
class AUDIT_RESULT
create make
feature
    baseline_name: STRING
    findings: ARRAYED_LIST [AUDIT_FINDING]
    compliant_settings: ARRAYED_LIST [COMPLIANT_SETTING]
    compliance_percentage: DOUBLE
    add_finding (finding)
    add_compliant (setting)
    calculate_compliance_percentage
end

-- src/comparison/audit_finding.e
class AUDIT_FINDING
create make, make_missing, make_mismatch
feature
    id: STRING
    setting: STRING
    expected: STRING
    actual: STRING
    severity: STRING
    control: STRING
    status: STRING
    rationale: STRING
    remediation: STRING
end
```

---

## Phase 2: Full Implementation

### Objective

Add report generation, evidence collection, and trend analysis to complete the enterprise compliance auditing feature set.

### Deliverables

1. **REPORT_GENERATOR** - Multi-format report creation
2. **EVIDENCE_COLLECTOR** - Configuration gathering
3. **TREND_ANALYZER** - Historical analysis
4. **AUDIT_STORE** - History storage
5. **Extended CLI** - `report`, `collect`, `trend`, `remediate` commands

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T2.1 | Implement REPORT_GENERATOR.generate_text | Text report output |
| T2.2 | Implement REPORT_GENERATOR.generate_html | HTML report with template |
| T2.3 | Implement PDF generation | PDF from HTML |
| T2.4 | Implement `report` command | Generates requested format |
| T2.5 | Implement EVIDENCE_COLLECTOR | Collects from file paths |
| T2.6 | Implement `collect` command | Gathers evidence to directory |
| T2.7 | Implement AUDIT_STORE | SQLite storage |
| T2.8 | Implement TREND_ANALYZER | Queries and calculates trends |
| T2.9 | Implement `trend` command | Shows compliance trends |
| T2.10 | Implement `remediate` command | Generates remediation plan |
| T2.11 | Implement CSV export | Export findings to CSV |
| T2.12 | Write integration tests | All commands tested |

### Test Cases (Phase 2)

| Test | Input | Expected Output |
|------|-------|-----------------|
| Report text | Audit result | Formatted text report |
| Report HTML | Audit result + template | Valid HTML |
| Report PDF | Audit result + template | PDF file created |
| Collect files | Systems JSON | Evidence directory with configs |
| Trend improving | History with improving compliance | "Trend: Improving" |
| Trend declining | History with declining compliance | "Trend: Declining" |
| Remediate by severity | Findings | Prioritized remediation plan |
| CSV export | Audit result | Valid CSV with all findings |

### Phase 2 Class Additions

```eiffel
-- src/report/report_generator.e
class REPORT_GENERATOR
create make
feature
    generate_text (result): STRING
    generate_html (result, template): STRING
    generate_pdf (result, template, output_path)
end

-- src/collect/evidence_collector.e
class EVIDENCE_COLLECTOR
create make
feature
    collect_from_systems (systems_def, output_dir)
    collect_single (path): SIMPLE_CONFIG
end

-- src/history/audit_store.e
class AUDIT_STORE
create make
feature
    store_result (result)
    query_history (baseline, period): ARRAYED_LIST [AUDIT_RESULT]
end

-- src/history/trend_analyzer.e
class TREND_ANALYZER
create make
feature
    analyze (baseline, period): TREND_RESULT
end

-- src/history/trend_result.e
class TREND_RESULT
create make
feature
    data_points: ARRAYED_LIST [TREND_POINT]
    direction: STRING  -- "improving", "stable", "declining"
    change_percentage: DOUBLE
    remediation_velocity: DOUBLE
end

-- src/export/finding_exporter.e
class FINDING_EXPORTER
create make
feature
    export_to_csv (result): STRING
    export_remediation_plan (result, format): STRING
end
```

---

## Phase 3: Production Polish

### Objective

Harden the application for production use with comprehensive error handling, compliance framework templates, and enterprise features.

### Deliverables

1. **Error handling hardening** - Graceful failures with actionable messages
2. **Framework templates** - SOC2, HIPAA, PCI-DSS baselines
3. **Report templates** - Professional HTML/PDF templates
4. **Remediation tracking** - Export to JIRA/ticketing format
5. **README and examples** - User documentation

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T3.1 | Comprehensive error messages | All error codes documented |
| T3.2 | SOC2 baseline template | Complete CC controls |
| T3.3 | HIPAA baseline template | Healthcare compliance |
| T3.4 | PCI-DSS baseline template | Payment card compliance |
| T3.5 | Professional HTML template | Styled, printable |
| T3.6 | Executive summary section | C-level friendly |
| T3.7 | JIRA export format | Ticket creation format |
| T3.8 | Write README.md | Installation, usage, examples |
| T3.9 | Performance testing | 1000 settings, 50 systems |
| T3.10 | Final integration testing | All scenarios pass |

---

## ECF Target Structure

```xml
<!-- Library target (reusable) -->
<target name="config_audit">
    <root all_classes="true"/>
    <!-- Dependencies and source clusters -->
</target>

<!-- CLI executable target -->
<target name="config_audit_cli" extends="config_audit">
    <root class="CONFIG_AUDIT_CLI" feature="make"/>
    <setting name="executable_name" value="config-audit"/>
</target>

<!-- Test target -->
<target name="config_audit_tests" extends="config_audit">
    <root class="TEST_APP" feature="make"/>
    <library name="simple_testing" location="$SIMPLE_EIFFEL/simple_testing/simple_testing.ecf"/>
    <cluster name="tests" location=".\tests\" recursive="true"/>
</target>
```

---

## Build Commands

```bash
# Compile CLI (workbench)
/d/prod/ec.sh -batch -config config_audit.ecf -target config_audit_cli -c_compile

# Compile CLI (finalized for release)
/d/prod/ec.sh -batch -config config_audit.ecf -target config_audit_cli -finalize -c_compile

# Run tests
/d/prod/ec.sh -batch -config config_audit.ecf -target config_audit_tests -c_compile
./EIFGENs/config_audit_tests/W_code/config_audit.exe

# Finalized test run
/d/prod/ec.sh -batch -config config_audit.ecf -target config_audit_tests -finalize -c_compile
./EIFGENs/config_audit_tests/F_code/config_audit.exe
```

---

## Success Criteria

| Criterion | Measure | Target |
|-----------|---------|--------|
| Compiles | Zero errors, zero warnings | 100% |
| Tests pass | All unit and integration tests | 100% |
| CLI functional | All 6 commands working | Functional |
| Comparison accuracy | False positive/negative rate | < 0.1% |
| Report quality | Auditor acceptance | Professional |
| Documentation | README, --help complete | Yes |
| Performance | 1000 settings in < 5 seconds | Yes |

---

## Risk Mitigation

| Risk | Mitigation |
|------|------------|
| Compliance framework accuracy | Partner with compliance SMEs |
| PDF generation complexity | Use HTML-to-PDF library |
| Large baseline handling | Lazy loading, efficient data structures |
| Report template maintenance | Separate templates from code |

---

## Post-MVP Roadmap

| Feature | Priority | Effort |
|---------|----------|--------|
| ISO 27001 framework | High | 3 days |
| FedRAMP framework | Medium | 3 days |
| Remote config collection (SSH) | Medium | 4 days |
| JIRA integration | Medium | 3 days |
| Scheduled audit daemon | Low | 5 days |
| Web dashboard | Low | 10 days |
