# EnvSentinel - Build Plan

**Version:** 1.0
**Status:** Design Complete

---

## Phase Overview

| Phase | Deliverable | Effort | Dependencies |
|-------|-------------|--------|--------------|
| Phase 1 | MVP CLI (validate, snapshot) | 5 days | simple_config, simple_env, simple_cli, simple_validation |
| Phase 2 | Full CLI (drift, scan, compliance) | 6 days | Phase 1 + simple_encryption, simple_logger |
| Phase 3 | Production Polish | 4 days | Phase 2 complete |

---

## Phase 1: MVP

### Objective

Deliver a functional CLI that can validate environment variables against policies and capture environment snapshots. This proves the core value proposition: policy-based configuration governance.

### Deliverables

1. **ENV_SENTINEL_CLI** - Main entry point with command routing
2. **ENV_SENTINEL_ENGINE** - Core orchestration class
3. **POLICY_LOADER** - Policy file parsing
4. **ENV_POLICY** - Policy data structure
5. **POLICY_VALIDATOR** - Rule enforcement
6. **ENV_SNAPSHOT** - Environment state capture
7. **Basic CLI** - `validate` and `snapshot` commands

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T1.1 | Create project structure with ECF | Compiles with all dependencies |
| T1.2 | Implement ENV_SENTINEL_CLI skeleton | Parses `--help` and `--version` |
| T1.3 | Implement POLICY_LOADER | Loads JSON policy files |
| T1.4 | Implement ENV_POLICY data structure | Stores variable definitions, rules |
| T1.5 | Implement VARIABLE_DEFINITION | Captures type, required, pattern, etc. |
| T1.6 | Implement ENV_SNAPSHOT.capture | Captures current environment |
| T1.7 | Implement POLICY_VALIDATOR.validate | Validates snapshot against policy |
| T1.8 | Implement `validate` command | Exit codes match validation result |
| T1.9 | Implement `snapshot` command | Outputs JSON snapshot |
| T1.10 | Write unit tests | 90% coverage of core logic |

### Test Cases (Phase 1)

| Test | Input | Expected Output |
|------|-------|-----------------|
| Validate all required present | Complete env + policy | Exit 0, "Validation passed" |
| Validate missing required | Missing required var | Exit 10, error message |
| Validate wrong type | String where int expected | Exit 10, type error |
| Validate pattern mismatch | Value not matching pattern | Exit 10, pattern error |
| Validate enum violation | Value not in allowed list | Exit 10, enum error |
| Snapshot current env | Current environment | JSON with all vars |
| Snapshot with filter | --filter "^APP_" | JSON with filtered vars |
| Snapshot with hashing | --hash-secrets | Secret values hashed |

### Phase 1 Class Structure

```eiffel
-- src/env_sentinel_cli.e
class ENV_SENTINEL_CLI
create make
feature
    make
    register_commands
    do_validate
    do_snapshot
end

-- src/env_sentinel_engine.e
class ENV_SENTINEL_ENGINE
create make
feature
    policy: ENV_POLICY
    load_policy (path)
    validate_current_environment (env_name): VALIDATION_RESULT
    capture_snapshot: ENV_SNAPSHOT
end

-- src/policy/policy_loader.e
class POLICY_LOADER
create make
feature
    load (path): ENV_POLICY
end

-- src/policy/env_policy.e
class ENV_POLICY
create make
feature
    variables: HASH_TABLE [VARIABLE_DEFINITION, STRING]
    security_rules: ARRAYED_LIST [SECURITY_RULE]
    add_variable (def)
    has_definition (name): BOOLEAN
end

-- src/policy/variable_definition.e
class VARIABLE_DEFINITION
create make, make_from_config
feature
    name: STRING
    type: STRING
    required: BOOLEAN
    pattern: detachable STRING
    allowed_values: detachable ARRAYED_LIST [STRING]
    environment_rules: HASH_TABLE [ENV_SPECIFIC_RULE, STRING]
end

-- src/validation/policy_validator.e
class POLICY_VALIDATOR
create make
feature
    validate (policy, snapshot, env_name): VALIDATION_RESULT
end

-- src/snapshot/env_snapshot.e
class ENV_SNAPSHOT
create make
feature
    variables: HASH_TABLE [STRING, STRING]
    timestamp: DATE_TIME
    capture_current (filter)
    to_json: STRING
end
```

---

## Phase 2: Full Implementation

### Objective

Add drift detection, security scanning, compliance reporting, and audit logging to complete the enterprise feature set.

### Deliverables

1. **DRIFT_DETECTOR** - Environment comparison
2. **SECURITY_SCANNER** - Risk analysis
3. **COMPLIANCE_REPORTER** - Framework-based reporting
4. **AUDIT_LOGGER** - Change and validation tracking
5. **Extended CLI** - `drift`, `scan`, `compliance`, `history` commands

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T2.1 | Implement DRIFT_DETECTOR | Compares two snapshots |
| T2.2 | Implement drift categorization | Added, removed, changed, expected |
| T2.3 | Implement `drift` command | Shows differences, --fail-on-drift works |
| T2.4 | Implement SECURITY_SCANNER | Detects exposed secrets |
| T2.5 | Implement secret pattern matching | Common secret patterns detected |
| T2.6 | Implement `scan` command | Reports security findings |
| T2.7 | Implement COMPLIANCE_REPORTER | Evaluates controls |
| T2.8 | Implement SOC2 framework | Basic SOC2 controls |
| T2.9 | Implement `compliance` command | Generates compliance report |
| T2.10 | Implement AUDIT_LOGGER | Logs all validation events |
| T2.11 | Implement `history` command | Queries audit log |
| T2.12 | Write integration tests | All commands tested |

### Test Cases (Phase 2)

| Test | Input | Expected Output |
|------|-------|-----------------|
| Drift none | Identical snapshots | "No drift detected", exit 0 |
| Drift additions | Snapshot B has more vars | Lists additions |
| Drift removals | Snapshot B has fewer vars | Lists removals |
| Drift changes | Same keys, different values | Lists changes |
| Drift expected | Changes match expected_drift | Labeled as expected |
| Scan clean | No exposed secrets | "No issues found", exit 0 |
| Scan exposed | Password in plain text | HIGH risk finding |
| Scan embedded | Token in connection string | HIGH risk finding |
| Compliance pass | All controls satisfied | "Compliant", exit 0 |
| Compliance fail | Missing required control | Lists failed controls, exit 40 |
| History query | --since "7 days ago" | Returns matching entries |

### Phase 2 Class Additions

```eiffel
-- src/drift/drift_detector.e
class DRIFT_DETECTOR
create make
feature
    detect_drift (snapshot1, snapshot2, policy): DRIFT_RESULT
end

-- src/drift/drift_result.e
class DRIFT_RESULT
create make
feature
    added: ARRAYED_LIST [STRING]
    removed: ARRAYED_LIST [STRING]
    changed: ARRAYED_LIST [DRIFT_CHANGE]
    expected: ARRAYED_LIST [STRING]
    has_differences: BOOLEAN
end

-- src/security/security_scanner.e
class SECURITY_SCANNER
create make
feature
    scan (snapshot): ARRAYED_LIST [SECURITY_FINDING]
    is_sensitive_key (key): BOOLEAN
    contains_secret_pattern (value): BOOLEAN
end

-- src/compliance/compliance_reporter.e
class COMPLIANCE_REPORTER
create make
feature
    load_framework (name)
    evaluate (snapshot, env_name): COMPLIANCE_RESULT
    generate_report (result, format): STRING
end

-- src/audit/audit_logger.e
class AUDIT_LOGGER
create make
feature
    log_validation (env, result, user)
    log_change (env, key, old_val, new_val, user)
    query (filter): ARRAYED_LIST [AUDIT_ENTRY]
end
```

---

## Phase 3: Production Polish

### Objective

Harden the application for production use with comprehensive error handling, documentation, watch mode, and additional compliance frameworks.

### Deliverables

1. **Error handling hardening** - Graceful failures with actionable messages
2. **Watch mode** - Continuous monitoring for changes
3. **Additional frameworks** - HIPAA, PCI-DSS templates
4. **Report formats** - HTML, PDF export
5. **README and examples** - User documentation

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T3.1 | Comprehensive error messages | All error codes documented |
| T3.2 | Implement `watch` command | Monitors and alerts on changes |
| T3.3 | Add HIPAA framework | Healthcare compliance |
| T3.4 | Add PCI-DSS framework | Payment card compliance |
| T3.5 | Implement HTML report output | Styled compliance reports |
| T3.6 | Add CI mode output | Machine-readable JSON |
| T3.7 | Write README.md | Installation, usage, examples |
| T3.8 | Add example policies | Common use case templates |
| T3.9 | Performance testing | Handle 1000+ variables |
| T3.10 | Final integration testing | All scenarios pass |

---

## ECF Target Structure

```xml
<!-- Library target (reusable) -->
<target name="env_sentinel">
    <root all_classes="true"/>
    <!-- Dependencies and source clusters -->
</target>

<!-- CLI executable target -->
<target name="env_sentinel_cli" extends="env_sentinel">
    <root class="ENV_SENTINEL_CLI" feature="make"/>
    <setting name="executable_name" value="env-sentinel"/>
</target>

<!-- Test target -->
<target name="env_sentinel_tests" extends="env_sentinel">
    <root class="TEST_APP" feature="make"/>
    <library name="simple_testing" location="$SIMPLE_EIFFEL/simple_testing/simple_testing.ecf"/>
    <cluster name="tests" location=".\tests\" recursive="true"/>
</target>
```

---

## Build Commands

```bash
# Compile CLI (workbench)
/d/prod/ec.sh -batch -config env_sentinel.ecf -target env_sentinel_cli -c_compile

# Compile CLI (finalized for release)
/d/prod/ec.sh -batch -config env_sentinel.ecf -target env_sentinel_cli -finalize -c_compile

# Run tests
/d/prod/ec.sh -batch -config env_sentinel.ecf -target env_sentinel_tests -c_compile
./EIFGENs/env_sentinel_tests/W_code/env_sentinel.exe

# Finalized test run
/d/prod/ec.sh -batch -config env_sentinel.ecf -target env_sentinel_tests -finalize -c_compile
./EIFGENs/env_sentinel_tests/F_code/env_sentinel.exe
```

---

## Success Criteria

| Criterion | Measure | Target |
|-----------|---------|--------|
| Compiles | Zero errors, zero warnings | 100% |
| Tests pass | All unit and integration tests | 100% |
| CLI functional | All 7 commands working | Functional |
| Validation accuracy | False positive rate | < 1% |
| Security scanning | Detection rate | > 95% |
| Documentation | README, --help complete | Yes |
| Performance | 1000 variables | < 2 seconds |

---

## Risk Mitigation

| Risk | Mitigation |
|------|------------|
| simple_env API limitations | Wrap with abstraction layer |
| Compliance framework accuracy | Consult compliance docs, iterate |
| Secret pattern false positives | Tunable sensitivity, allow-lists |
| Audit log storage growth | Rotation policy, archival |

---

## Post-MVP Roadmap

| Feature | Priority | Effort |
|---------|----------|--------|
| Slack/Teams alerting | High | 2 days |
| Remote snapshot sources | Medium | 3 days |
| Custom compliance frameworks | Medium | 3 days |
| Secrets manager integration | Medium | 4 days |
| Web dashboard | Low | 10 days |
