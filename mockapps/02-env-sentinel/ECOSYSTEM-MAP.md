# EnvSentinel - Ecosystem Integration

**Version:** 1.0
**Status:** Design Complete

---

## simple_* Dependencies

### Required Libraries

| Library | Purpose | Integration Point |
|---------|---------|-------------------|
| simple_config | Configuration file access | Policy files, config validation |
| simple_env | Environment variable access | Read/monitor environment |
| simple_cli | Command-line argument parsing | CLI interface layer |
| simple_validation | Rule-based validation | Policy enforcement engine |
| simple_logger | Audit logging | Change tracking, compliance evidence |

### Optional Libraries

| Library | Purpose | When Needed |
|---------|---------|-------------|
| simple_encryption | Sensitive value handling | Hash secrets, detect encrypted values |
| simple_json | Advanced JSON manipulation | Complex policy parsing |
| simple_file | File system operations | Snapshot storage |
| simple_template | Report rendering | HTML/PDF report generation |
| simple_diff | Text comparison | Detailed value diffs |
| simple_datetime | Timestamp handling | Audit log entries |

---

## Integration Patterns

### simple_config Integration

**Purpose:** Load and parse policy definitions and configuration files

**Usage:**
```eiffel
class POLICY_LOADER

feature -- Loading

    load_policy (a_path: STRING): ENV_POLICY
            -- Load policy from JSON file.
        local
            l_config: SIMPLE_CONFIG
        do
            create l_config.make_with_file (a_path)

            create Result.make
            Result.set_name (l_config.string_value_or_default ("meta.name", "Unnamed Policy"))
            Result.set_version (l_config.string_value_or_default ("meta.version", "1.0"))

            -- Load variable definitions
            if attached l_config.section ("variables") as l_vars then
                load_variable_definitions (l_vars, Result)
            end

            -- Load security rules
            if attached l_config.section ("security_rules") as l_security then
                load_security_rules (l_security, Result)
            end

            -- Load expected drift definitions
            if attached l_config.section ("expected_drift") as l_drift then
                load_expected_drift (l_drift, Result)
            end
        end

feature {NONE} -- Implementation

    load_variable_definitions (a_vars: SIMPLE_CONFIG; a_policy: ENV_POLICY)
            -- Load variable definitions into policy.
        do
            across a_vars.keys_model as l_key loop
                if attached a_vars.section (l_key.item) as l_def then
                    a_policy.add_variable (create {VARIABLE_DEFINITION}.make_from_config (l_key.item, l_def))
                end
            end
        end

end
```

**Data flow:** Policy JSON -> SIMPLE_CONFIG -> Parse sections -> Build ENV_POLICY object

### simple_env Integration

**Purpose:** Access and monitor environment variables

**Usage:**
```eiffel
class ENV_SNAPSHOT_CAPTURER

feature -- Capture

    capture_current_environment (a_filter: detachable STRING): ENV_SNAPSHOT
            -- Capture current environment state.
        local
            l_env: SIMPLE_ENV
            l_keys: ARRAYED_LIST [STRING]
        do
            create l_env
            create Result.make

            l_keys := l_env.all_keys
            across l_keys as l_key loop
                if a_filter = Void or else l_key.item.has_substring (a_filter) then
                    if attached l_env.get (l_key.item) as l_value then
                        Result.add_variable (l_key.item, l_value)
                    end
                end
            end

            Result.set_timestamp (create {DATE_TIME}.make_now)
        end

    monitor_for_changes (a_callback: PROCEDURE [STRING, STRING, STRING])
            -- Monitor environment for changes, call callback on change.
            -- Callback receives: key, old_value, new_value
        local
            l_env: SIMPLE_ENV
            l_current: ENV_SNAPSHOT
            l_new: ENV_SNAPSHOT
        do
            create l_env
            l_current := capture_current_environment (Void)

            from
            until
                should_stop_monitoring
            loop
                sleep (monitoring_interval)
                l_new := capture_current_environment (Void)

                -- Compare and notify
                across l_new.variables as l_var loop
                    if not l_current.has_variable (l_var.key) then
                        a_callback.call ([l_var.key, "", l_var.item])
                    elseif not l_current.value (l_var.key).same_string (l_var.item) then
                        a_callback.call ([l_var.key, l_current.value (l_var.key), l_var.item])
                    end
                end

                l_current := l_new
            end
        end

end
```

**Data flow:** SIMPLE_ENV.all_keys -> Iterate -> Build snapshot -> Compare snapshots

### simple_validation Integration

**Purpose:** Policy rule enforcement engine

**Usage:**
```eiffel
class POLICY_VALIDATOR

feature -- Validation

    validate_environment (a_policy: ENV_POLICY; a_snapshot: ENV_SNAPSHOT; a_env_name: STRING): VALIDATION_RESULT
            -- Validate environment snapshot against policy.
        local
            l_validator: SIMPLE_VALIDATOR
            l_var_def: VARIABLE_DEFINITION
        do
            create l_validator
            create Result.make

            across a_policy.variables as l_def loop
                l_var_def := l_def.item

                -- Check required
                if l_var_def.is_required and then not a_snapshot.has_variable (l_var_def.name) then
                    Result.add_error (create {VALIDATION_ERROR}.make (
                        l_var_def.name, "required", "Variable is required but not set"))
                end

                -- Check value if present
                if a_snapshot.has_variable (l_var_def.name) then
                    validate_variable_value (l_var_def, a_snapshot.value (l_var_def.name), a_env_name, Result)
                end
            end

            -- Check for unknown variables (if strict mode)
            if a_policy.strict_mode then
                across a_snapshot.variables as l_var loop
                    if not a_policy.has_definition (l_var.key) then
                        Result.add_warning (create {VALIDATION_WARNING}.make (
                            l_var.key, "unknown", "Variable not defined in policy"))
                    end
                end
            end
        end

feature {NONE} -- Implementation

    validate_variable_value (a_def: VARIABLE_DEFINITION; a_value: STRING; a_env: STRING; a_result: VALIDATION_RESULT)
            -- Validate a single variable value.
        do
            -- Type validation
            if a_def.has_type then
                validate_type (a_def, a_value, a_result)
            end

            -- Pattern validation
            if attached a_def.pattern as l_pattern then
                if not a_value.matches (l_pattern) then
                    a_result.add_error (create {VALIDATION_ERROR}.make (
                        a_def.name, "pattern", "Value does not match pattern: " + l_pattern))
                end
            end

            -- Enum validation
            if a_def.is_enum then
                validate_enum (a_def, a_value, a_env, a_result)
            end

            -- Range validation
            if a_def.has_range then
                validate_range (a_def, a_value, a_result)
            end

            -- Environment-specific rules
            if attached a_def.environment_rule (a_env) as l_rule then
                validate_environment_rule (a_def.name, a_value, l_rule, a_result)
            end
        end

end
```

**Data flow:** Policy + Snapshot -> SIMPLE_VALIDATOR rules -> Execute -> VALIDATION_RESULT

### simple_logger Integration

**Purpose:** Audit trail for compliance

**Usage:**
```eiffel
class AUDIT_LOGGER

feature -- Logging

    log_validation (a_env: STRING; a_result: VALIDATION_RESULT; a_user: STRING)
            -- Log validation event for audit trail.
        local
            l_logger: SIMPLE_LOGGER
            l_entry: SIMPLE_LOG_ENTRY
        do
            l_logger := get_audit_logger

            create l_entry.make ("validation")
            l_entry.set_field ("environment", a_env)
            l_entry.set_field ("user", a_user)
            l_entry.set_field ("timestamp", current_iso_timestamp)
            l_entry.set_field ("passed", a_result.is_valid.out)
            l_entry.set_field ("error_count", a_result.error_count.out)
            l_entry.set_field ("warning_count", a_result.warning_count.out)

            if not a_result.is_valid then
                l_entry.set_field ("errors", errors_to_json (a_result.errors))
            end

            l_logger.log (l_entry)
        end

    log_change (a_env: STRING; a_key: STRING; a_old_value, a_new_value: STRING; a_user: STRING)
            -- Log configuration change for audit trail.
        local
            l_logger: SIMPLE_LOGGER
            l_entry: SIMPLE_LOG_ENTRY
        do
            l_logger := get_audit_logger

            create l_entry.make ("change")
            l_entry.set_field ("environment", a_env)
            l_entry.set_field ("key", a_key)
            l_entry.set_field ("user", a_user)
            l_entry.set_field ("timestamp", current_iso_timestamp)
            -- Note: Don't log actual values for secrets
            if is_sensitive (a_key) then
                l_entry.set_field ("old_value", "[REDACTED]")
                l_entry.set_field ("new_value", "[REDACTED]")
                l_entry.set_field ("changed", (not a_old_value.same_string (a_new_value)).out)
            else
                l_entry.set_field ("old_value", a_old_value)
                l_entry.set_field ("new_value", a_new_value)
            end

            l_logger.log (l_entry)
        end

    query_history (a_query: AUDIT_QUERY): ARRAYED_LIST [AUDIT_ENTRY]
            -- Query audit history.
        local
            l_logger: SIMPLE_LOGGER
        do
            l_logger := get_audit_logger
            Result := l_logger.query (a_query.to_filter)
        end

end
```

**Data flow:** Event -> Create log entry -> SIMPLE_LOGGER.log -> Persistent storage

### simple_encryption Integration

**Purpose:** Detect and handle sensitive values

**Usage:**
```eiffel
class SECURITY_SCANNER

feature -- Scanning

    scan_for_exposed_secrets (a_snapshot: ENV_SNAPSHOT): ARRAYED_LIST [SECURITY_FINDING]
            -- Scan for potentially exposed secrets.
        local
            l_encryptor: SIMPLE_ENCRYPTION
        do
            create l_encryptor
            create Result.make (0)

            across a_snapshot.variables as l_var loop
                -- Check if key suggests sensitive data
                if is_sensitive_key (l_var.key) then
                    -- Check if value appears to be encrypted
                    if not l_encryptor.appears_encrypted (l_var.item) then
                        Result.extend (create {SECURITY_FINDING}.make (
                            "exposed_secret",
                            l_var.key,
                            "high",
                            "Sensitive value appears to be stored in plain text"
                        ))
                    end
                end

                -- Check for common secret patterns in values
                if contains_secret_pattern (l_var.item) then
                    Result.extend (create {SECURITY_FINDING}.make (
                        "embedded_secret",
                        l_var.key,
                        "high",
                        "Value contains embedded credentials or tokens"
                    ))
                end
            end
        end

    hash_sensitive_values (a_snapshot: ENV_SNAPSHOT): ENV_SNAPSHOT
            -- Return snapshot with sensitive values hashed.
        local
            l_encryptor: SIMPLE_ENCRYPTION
        do
            create l_encryptor
            create Result.make

            across a_snapshot.variables as l_var loop
                if is_sensitive_key (l_var.key) then
                    Result.add_variable (l_var.key, l_encryptor.sha256_hash (l_var.item))
                else
                    Result.add_variable (l_var.key, l_var.item)
                end
            end

            Result.set_timestamp (a_snapshot.timestamp)
            Result.set_hashed (True)
        end

end
```

**Data flow:** Snapshot values -> SIMPLE_ENCRYPTION.appears_encrypted -> Security findings

---

## Dependency Graph

```
env_sentinel (application)
    |
    +-- simple_config (required)
    |       |
    |       +-- simple_json (transitive)
    |
    +-- simple_env (required)
    |
    +-- simple_cli (required)
    |
    +-- simple_validation (required)
    |
    +-- simple_logger (required)
    |
    +-- simple_encryption (optional - security scanning)
    |
    +-- simple_template (optional - report generation)
    |
    +-- simple_file (optional - snapshot storage)
    |
    +-- simple_datetime (optional - timestamp formatting)
    |
    +-- ISE base (required - core Eiffel)
```

---

## ECF Configuration

```xml
<?xml version="1.0" encoding="ISO-8859-1"?>
<system xmlns="http://www.eiffel.com/developers/xml/configuration-1-22-0"
        xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
        xsi:schemaLocation="http://www.eiffel.com/developers/xml/configuration-1-22-0 http://www.eiffel.com/developers/xml/configuration-1-22-0.xsd"
        name="env_sentinel"
        uuid="B2C3D4E5-F6A7-8901-BCDE-F23456789012">

    <description>EnvSentinel - Environment configuration governance</description>

    <!-- Library target (reusable core) -->
    <target name="env_sentinel">
        <root all_classes="true"/>
        <file_rule>
            <exclude>/tests$</exclude>
            <exclude>/EIFGENs$</exclude>
        </file_rule>
        <option warning="warning" syntax="standard" manifest_array_type="mismatch_warning">
            <assertions precondition="true" postcondition="true" check="true" invariant="true"/>
        </option>

        <!-- simple_* dependencies -->
        <library name="simple_config" location="$SIMPLE_EIFFEL/simple_config/simple_config.ecf"/>
        <library name="simple_env" location="$SIMPLE_EIFFEL/simple_env/simple_env.ecf"/>
        <library name="simple_cli" location="$SIMPLE_EIFFEL/simple_cli/simple_cli.ecf"/>
        <library name="simple_validation" location="$SIMPLE_EIFFEL/simple_validation/simple_validation.ecf"/>
        <library name="simple_logger" location="$SIMPLE_EIFFEL/simple_logger/simple_logger.ecf"/>
        <library name="simple_encryption" location="$SIMPLE_EIFFEL/simple_encryption/simple_encryption.ecf"/>

        <!-- ISE dependencies -->
        <library name="base" location="$ISE_LIBRARY/library/base/base.ecf"/>
        <library name="time" location="$ISE_LIBRARY/library/time/time.ecf"/>

        <!-- Source -->
        <cluster name="src" location=".\src\" recursive="true"/>
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

</system>
```

---

## Integration Testing Strategy

### Cross-Library Integration Tests

| Test | Libraries Involved | Verification |
|------|-------------------|--------------|
| Policy loading | simple_config, simple_json | Complex policies parse correctly |
| Env capture | simple_env | All variables captured |
| Validation | simple_validation | Rules enforce correctly |
| Audit logging | simple_logger | Events persisted, queryable |
| Secret detection | simple_encryption | Exposed secrets identified |

### Example Integration Test

```eiffel
class TEST_ENV_SENTINEL_INTEGRATION

inherit
    SIMPLE_TEST_SET

feature -- Tests

    test_validate_with_policy
            -- Test full validation workflow.
        local
            l_engine: ENV_SENTINEL_ENGINE
            l_result: VALIDATION_RESULT
        do
            create l_engine.make

            -- Load test policy
            l_engine.load_policy ("test_data/test_policy.json")

            -- Set up test environment
            set_test_env ("DATABASE_URL", "postgres://user:pass@localhost:5432/db")
            set_test_env ("LOG_LEVEL", "info")
            set_test_env ("API_RATE_LIMIT", "500")

            -- Validate
            l_result := l_engine.validate_current_environment ("test")

            assert ("Validation passed", l_result.is_valid)
            assert ("No errors", l_result.error_count = 0)
        end

    test_drift_detection
            -- Test drift detection between environments.
        local
            l_engine: ENV_SENTINEL_ENGINE
            l_drift: DRIFT_RESULT
        do
            create l_engine.make

            -- Create snapshots
            l_engine.load_snapshot ("staging", "test_data/staging_snapshot.json")
            l_engine.load_snapshot ("production", "test_data/production_snapshot.json")

            -- Detect drift
            l_drift := l_engine.detect_drift ("staging", "production")

            assert ("Drift detected", l_drift.has_differences)
            assert ("Missing variable found", l_drift.missing_in_target.has ("BETA_FEATURE"))
        end

end
```
