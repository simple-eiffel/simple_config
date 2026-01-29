# ConfigForge - Ecosystem Integration

**Version:** 1.0
**Status:** Design Complete

---

## simple_* Dependencies

### Required Libraries

| Library | Purpose | Integration Point |
|---------|---------|-------------------|
| simple_config | Core configuration access | All config loading, merging, access |
| simple_json | JSON parsing, schema handling | Schema validation, migration definitions |
| simple_cli | Command-line argument parsing | CLI interface layer |
| simple_file | File system operations | Reading/writing config files |
| simple_validation | Rule-based validation | Schema enforcement |

### Optional Libraries

| Library | Purpose | When Needed |
|---------|---------|-------------|
| simple_diff | Text/structure diffing | When using `diff` command |
| simple_template | Report template rendering | Custom report formats |
| simple_env | Enhanced env var access | Advanced environment integration |
| simple_logger | Structured logging | Verbose mode, audit logging |
| simple_csv | CSV export | `export --format csv` |
| simple_yaml | YAML export | `export --format yaml` |

---

## Integration Patterns

### simple_config Integration

**Purpose:** Core configuration access with dot notation and environment fallback

**Usage:**
```eiffel
class CONFIG_MERGER

feature -- Merging

    merge_files (a_base_path: STRING; a_overlay_paths: LIST [STRING]): SIMPLE_CONFIG
            -- Merge base config with overlays, later files override earlier.
        local
            l_result: SIMPLE_CONFIG
        do
            create l_result.make_with_file (a_base_path)
            across a_overlay_paths as l_path loop
                l_result.merge_file (l_path.item)
            end
            Result := l_result
        ensure
            result_exists: Result /= Void
        end

    resolve_with_env (a_config: SIMPLE_CONFIG; a_prefix: STRING): SIMPLE_CONFIG
            -- Resolve config values with environment variable fallback.
        do
            -- Environment variables with prefix override config values
            -- e.g., MYAPP_DATABASE_HOST overrides "database.host"
            Result := a_config
            -- Implementation uses string_value_or_env pattern
        end

end
```

**Data flow:** File -> SIMPLE_CONFIG.make_with_file -> merge_file -> Access via dot notation

### simple_json Integration

**Purpose:** Schema parsing and validation rule definitions

**Usage:**
```eiffel
class CONFIG_VALIDATOR

feature -- Schema Loading

    load_schema (a_schema_path: STRING)
            -- Load JSON schema for validation.
        local
            l_json: SIMPLE_JSON
            l_schema_config: SIMPLE_CONFIG
        do
            create l_json
            if attached l_json.load_config (a_schema_path) as l_val then
                -- Parse schema properties into validation rules
                create l_schema_config.make_with_file (a_schema_path)
                parse_schema_properties (l_schema_config)
            end
        end

feature -- Validation

    validate (a_config: SIMPLE_CONFIG): ARRAYED_LIST [VALIDATION_ERROR]
            -- Validate config against loaded schema.
        do
            create Result.make (0)
            across schema_rules as l_rule loop
                if not l_rule.item.is_satisfied (a_config) then
                    Result.extend (create {VALIDATION_ERROR}.make (
                        l_rule.item.key,
                        l_rule.item.rule_name,
                        l_rule.item.error_message
                    ))
                end
            end
        end

end
```

**Data flow:** Schema file -> SIMPLE_JSON.load_config -> Parse rules -> Validate SIMPLE_CONFIG

### simple_cli Integration

**Purpose:** Argument parsing and command routing

**Usage:**
```eiffel
class CONFIG_FORGE_CLI

inherit
    SIMPLE_CLI_APPLICATION

feature -- Commands

    register_commands
            -- Register all ConfigForge commands.
        do
            register_command ("merge", agent do_merge)
            register_command ("validate", agent do_validate)
            register_command ("diff", agent do_diff)
            register_command ("migrate", agent do_migrate)
            register_command ("export", agent do_export)
            register_command ("info", agent do_info)
        end

feature {NONE} -- Command Implementations

    do_merge
            -- Execute merge command.
        local
            l_base: STRING
            l_overlays: ARRAYED_LIST [STRING]
            l_result: SIMPLE_CONFIG
        do
            l_base := argument_value ("base-file")
            l_overlays := argument_list ("overlay-files")

            l_result := engine.merge_files (l_base, l_overlays)

            if has_option ("output") then
                l_result.save_to (option_value ("output"))
            else
                print (l_result.to_json_pretty)
            end
        end

end
```

**Data flow:** Args -> SIMPLE_CLI parse -> Route to handler -> Execute with engine

### simple_diff Integration

**Purpose:** Structured comparison of configuration objects

**Usage:**
```eiffel
class CONFIG_DIFFER

feature -- Comparison

    compare_configs (a_config1, a_config2: SIMPLE_CONFIG): CONFIG_DIFF_RESULT
            -- Compare two configurations and return differences.
        local
            l_differ: SIMPLE_DIFF
            l_json1, l_json2: STRING
        do
            create l_differ
            l_json1 := a_config1.to_json_pretty
            l_json2 := a_config2.to_json_pretty

            -- Use simple_diff for structured JSON comparison
            create Result.make
            Result.set_additions (l_differ.added_lines (l_json1, l_json2))
            Result.set_removals (l_differ.removed_lines (l_json1, l_json2))
            Result.set_modifications (detect_modified_keys (a_config1, a_config2))
        end

feature -- Output

    format_diff (a_diff: CONFIG_DIFF_RESULT): STRING
            -- Format diff result for display.
        do
            create Result.make_empty
            across a_diff.additions as l_add loop
                Result.append ("+ " + l_add.item + "%N")
            end
            across a_diff.removals as l_rem loop
                Result.append ("- " + l_rem.item + "%N")
            end
            across a_diff.modifications as l_mod loop
                Result.append ("~ " + l_mod.item + "%N")
            end
        end

end
```

**Data flow:** Two configs -> Extract JSON -> simple_diff compare -> Format output

### simple_validation Integration

**Purpose:** Rule-based validation engine for schema enforcement

**Usage:**
```eiffel
class CONFIG_SCHEMA_VALIDATOR

feature -- Rule Building

    build_rules_from_schema (a_schema: SIMPLE_CONFIG): ARRAYED_LIST [VALIDATION_RULE]
            -- Build validation rules from schema definition.
        local
            l_validator: SIMPLE_VALIDATOR
        do
            create l_validator
            create Result.make (10)

            -- For each property in schema, create validation rules
            if attached a_schema.section ("properties") as l_props then
                across l_props.keys_model as l_key loop
                    if attached l_props.section (l_key.item) as l_prop_def then
                        Result.append (create_rules_for_property (l_key.item, l_prop_def, l_validator))
                    end
                end
            end
        end

feature {NONE} -- Rule Creation

    create_rules_for_property (a_key: STRING; a_def: SIMPLE_CONFIG; a_validator: SIMPLE_VALIDATOR): ARRAYED_LIST [VALIDATION_RULE]
            -- Create validation rules for a single property.
        do
            create Result.make (3)

            -- Type rule
            if attached a_def.string_value ("type") as l_type then
                Result.extend (create {TYPE_VALIDATION_RULE}.make (a_key, l_type))
            end

            -- Required rule
            if a_def.boolean_value ("required") then
                Result.extend (create {REQUIRED_VALIDATION_RULE}.make (a_key))
            end

            -- Range rules for integers
            if a_def.has_key ("min") then
                Result.extend (create {MIN_VALUE_RULE}.make (a_key, a_def.integer_value ("min")))
            end
            if a_def.has_key ("max") then
                Result.extend (create {MAX_VALUE_RULE}.make (a_key, a_def.integer_value ("max")))
            end

            -- Enum rule
            if a_def.has_key ("enum") then
                Result.extend (create {ENUM_VALIDATION_RULE}.make (a_key, a_def.string_list ("enum")))
            end
        end

end
```

**Data flow:** Schema -> Parse property definitions -> Create SIMPLE_VALIDATOR rules -> Validate config

---

## Dependency Graph

```
config_forge (application)
    |
    +-- simple_config (required)
    |       |
    |       +-- simple_json (transitive)
    |
    +-- simple_json (required - for schema parsing)
    |
    +-- simple_cli (required)
    |
    +-- simple_file (required)
    |
    +-- simple_validation (required)
    |
    +-- simple_diff (optional - for diff command)
    |
    +-- simple_template (optional - for custom reports)
    |
    +-- simple_env (optional - enhanced env support)
    |
    +-- simple_logger (optional - audit logging)
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
        name="config_forge"
        uuid="A1B2C3D4-E5F6-7890-ABCD-EF1234567890">

    <description>ConfigForge - Multi-environment configuration management</description>

    <!-- Library target (reusable core) -->
    <target name="config_forge">
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
        <library name="simple_json" location="$SIMPLE_EIFFEL/simple_json/simple_json.ecf"/>
        <library name="simple_cli" location="$SIMPLE_EIFFEL/simple_cli/simple_cli.ecf"/>
        <library name="simple_file" location="$SIMPLE_EIFFEL/simple_file/simple_file.ecf"/>
        <library name="simple_validation" location="$SIMPLE_EIFFEL/simple_validation/simple_validation.ecf"/>
        <library name="simple_diff" location="$SIMPLE_EIFFEL/simple_diff/simple_diff.ecf"/>

        <!-- ISE dependencies -->
        <library name="base" location="$ISE_LIBRARY/library/base/base.ecf"/>

        <!-- Source -->
        <cluster name="src" location=".\src\" recursive="true"/>
    </target>

    <!-- CLI executable target -->
    <target name="config_forge_cli" extends="config_forge">
        <root class="CONFIG_FORGE_CLI" feature="make"/>
        <setting name="executable_name" value="config-forge"/>
    </target>

    <!-- Test target -->
    <target name="config_forge_tests" extends="config_forge">
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
| Merge with env fallback | simple_config, simple_env | Env vars override file values |
| Schema validation | simple_json, simple_validation | Invalid configs rejected |
| Diff generation | simple_config, simple_diff | Differences accurately detected |
| CLI parsing | simple_cli | All commands route correctly |
| File operations | simple_file | Read/write without errors |

### Example Integration Test

```eiffel
class TEST_CONFIG_FORGE_INTEGRATION

inherit
    SIMPLE_TEST_SET

feature -- Tests

    test_merge_with_validation
            -- Test merging and validating a configuration.
        local
            l_engine: CONFIG_FORGE_ENGINE
            l_result: SIMPLE_CONFIG
            l_errors: ARRAYED_LIST [VALIDATION_ERROR]
        do
            create l_engine.make

            -- Merge base with overlay
            l_result := l_engine.merge_files (
                "test_data/base.json",
                << "test_data/dev.json" >>
            )

            -- Validate against schema
            l_engine.load_schema ("test_data/schema.json")
            l_errors := l_engine.validate (l_result)

            assert ("No validation errors", l_errors.is_empty)
            assert ("Merged value present",
                l_result.string_value ("database.host") ~ "localhost")
        end

end
```
