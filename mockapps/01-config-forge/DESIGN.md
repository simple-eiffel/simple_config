# ConfigForge - Technical Design

**Version:** 1.0
**Status:** Design Complete

---

## Architecture

### Component Overview

```
+----------------------------------------------------------+
|                      ConfigForge                          |
+----------------------------------------------------------+
|  CLI Interface Layer                                      |
|    - Argument parsing (simple_cli)                        |
|    - Command routing                                      |
|    - Output formatting (text, json, table)                |
+----------------------------------------------------------+
|  Business Logic Layer                                     |
|    - CONFIG_FORGE_ENGINE (orchestration)                  |
|    - CONFIG_MERGER (hierarchical merge)                   |
|    - CONFIG_VALIDATOR (schema validation)                 |
|    - CONFIG_DIFFER (comparison)                           |
|    - CONFIG_MIGRATOR (schema migration)                   |
+----------------------------------------------------------+
|  Integration Layer                                        |
|    - simple_config (config access)                        |
|    - simple_json (schema parsing)                         |
|    - simple_diff (text diffing)                           |
|    - simple_validation (rule engine)                      |
|    - simple_file (file I/O)                               |
+----------------------------------------------------------+
|  Data Layer                                               |
|    - JSON configuration files                             |
|    - JSON schema files                                    |
|    - Environment variable sources                         |
+----------------------------------------------------------+
```

### Class Design

| Class | Responsibility | Key Features |
|-------|----------------|--------------|
| CONFIG_FORGE_CLI | Command-line interface | parse_args, route_command, format_output |
| CONFIG_FORGE_ENGINE | Core business logic | merge, validate, diff, migrate |
| CONFIG_MERGER | Hierarchical config merging | merge_files, apply_overlay, resolve_env |
| CONFIG_VALIDATOR | Schema-based validation | load_schema, validate_config, report_errors |
| CONFIG_DIFFER | Configuration comparison | compare_configs, format_diff, detect_drift |
| CONFIG_MIGRATOR | Schema version migration | load_migration, apply_transforms, verify_result |
| CONFIG_REPORTER | Output generation | text_report, json_output, table_format |

---

## Command Structure

```bash
config-forge <command> [options] [arguments]

Commands:
  merge       Merge configuration files with hierarchical overlays
  validate    Validate configuration against a schema
  diff        Compare two configurations and show differences
  migrate     Migrate configuration between schema versions
  export      Export merged configuration to various formats
  info        Show information about a configuration file

Global Options:
  --config FILE      Configuration file for config-forge itself
  --output FORMAT    Output format: text (default), json, table
  --verbose          Verbose output with debug information
  --quiet            Suppress all output except errors
  --no-color         Disable colored output
  --help             Show help for command
  --version          Show version information
```

### Command Details

#### merge
```bash
config-forge merge [options] <base-file> [overlay-files...]

Options:
  --env ENV          Environment name (loads <env>.json overlay)
  --env-prefix PRE   Load environment variables with prefix
  --output FILE      Write merged result to file (default: stdout)
  --pretty           Pretty-print JSON output

Examples:
  config-forge merge base.json dev.json
  config-forge merge base.json --env production
  config-forge merge base.json --env-prefix MYAPP_
```

#### validate
```bash
config-forge validate [options] <config-file>

Options:
  --schema FILE      JSON schema file for validation
  --strict           Fail on unknown keys (not in schema)
  --env ENV          Validate for specific environment
  --ci               Exit with non-zero on validation errors

Examples:
  config-forge validate config.json --schema schema.json
  config-forge validate config.json --schema schema.json --strict --ci
```

#### diff
```bash
config-forge diff [options] <file1> <file2>

Options:
  --ignore KEY       Ignore specific keys in comparison
  --ignore-file F    File with keys to ignore (one per line)
  --fail-on-diff     Exit non-zero if differences found
  --context N        Show N lines of context (default: 3)

Examples:
  config-forge diff staging.json production.json
  config-forge diff deployed.json proposed.json --fail-on-diff
```

#### migrate
```bash
config-forge migrate [options] <config-file>

Options:
  --from VERSION     Source schema version
  --to VERSION       Target schema version
  --migration FILE   Migration definition file
  --dry-run          Show what would change without modifying
  --output FILE      Write migrated config to file

Examples:
  config-forge migrate config.json --from v1 --to v2
  config-forge migrate config.json --migration v1-to-v2.json --dry-run
```

#### export
```bash
config-forge export [options] <config-file>

Options:
  --format FORMAT    Output format: json, env, yaml, properties
  --env ENV          Export for specific environment
  --output FILE      Write to file (default: stdout)
  --prefix PREFIX    Prefix for env format output

Examples:
  config-forge export config.json --format env
  config-forge export config.json --format env --prefix MYAPP_
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
| Config Files   | --> | CONFIG_MERGER    | --> | Merged Config  |
| (base + envs)  |     +------------------+     +-------+--------+
+----------------+                                      |
                                                        v
+----------------+     +------------------+     +----------------+
| Schema File    | --> | CONFIG_VALIDATOR | --> | Validation     |
|                |     +------------------+     | Report         |
+----------------+                              +----------------+
                                                        |
                                                        v
+----------------+     +------------------+     +----------------+
| Second Config  | --> | CONFIG_DIFFER    | --> | Diff Report    |
| (for compare)  |     +------------------+     +----------------+
+----------------+                                      |
                                                        v
+----------------+     +------------------+     +----------------+
| Migration Def  | --> | CONFIG_MIGRATOR  | --> | Migrated       |
|                |     +------------------+     | Config         |
+----------------+                              +----------------+
                                                        |
                                                        v
                          +------------------+
                          | CONFIG_REPORTER  |
                          +--------+---------+
                                   |
                                   v
                          +------------------+
                          |  Output (stdout  |
                          |  or file)        |
                          +------------------+
```

---

## Configuration Schema

### config-forge.json (Tool Configuration)

```json
{
  "config_forge": {
    "base_config": "config/base.json",
    "environments": {
      "dev": "config/dev.json",
      "staging": "config/staging.json",
      "production": "config/production.json"
    },
    "schema": "config/schema.json",
    "migrations_dir": "config/migrations/",
    "defaults": {
      "output_format": "text",
      "strict_validation": false,
      "env_prefix": ""
    }
  }
}
```

### Schema Definition Format

```json
{
  "$schema": "config-forge-schema-v1",
  "properties": {
    "database.host": {
      "type": "string",
      "required": true,
      "description": "Database hostname"
    },
    "database.port": {
      "type": "integer",
      "min": 1,
      "max": 65535,
      "default": 5432,
      "description": "Database port"
    },
    "database.ssl": {
      "type": "boolean",
      "default": true,
      "description": "Enable SSL for database connections"
    },
    "allowed_hosts": {
      "type": "array",
      "items": { "type": "string" },
      "min_items": 1,
      "description": "List of allowed hostnames"
    },
    "log_level": {
      "type": "string",
      "enum": ["debug", "info", "warn", "error"],
      "default": "info",
      "description": "Application log level"
    }
  }
}
```

### Migration Definition Format

```json
{
  "$schema": "config-forge-migration-v1",
  "from_version": "1.0",
  "to_version": "2.0",
  "transforms": [
    {
      "type": "rename",
      "from": "api_key",
      "to": "api.key"
    },
    {
      "type": "add",
      "key": "api.version",
      "default": "v2"
    },
    {
      "type": "remove",
      "key": "deprecated_feature"
    },
    {
      "type": "convert",
      "key": "timeout",
      "from_type": "string",
      "to_type": "integer",
      "converter": "parse_seconds"
    }
  ]
}
```

---

## Error Handling

| Error Type | Handling | User Message |
|------------|----------|--------------|
| File not found | Return specific error code (1) | "Error: Configuration file not found: {path}" |
| Invalid JSON | Return specific error code (2) | "Error: Invalid JSON in {file} at line {n}: {detail}" |
| Schema violation | Return specific error code (3) | "Validation error: {key} - {rule}: {message}" |
| Merge conflict | Return specific error code (4) | "Conflict: {key} has incompatible types in {file1} and {file2}" |
| Migration failure | Return specific error code (5) | "Migration error: Cannot apply {transform} to {key}" |
| Permission denied | Return specific error code (6) | "Error: Permission denied writing to {path}" |

### Exit Codes

| Code | Meaning |
|------|---------|
| 0 | Success |
| 1 | File not found |
| 2 | JSON parse error |
| 3 | Validation failure |
| 4 | Merge conflict |
| 5 | Migration failure |
| 6 | Permission error |
| 10 | Diff found (with --fail-on-diff) |
| 99 | Unknown error |

---

## GUI/TUI Future Path

**CLI foundation enables:**

1. **Visual Config Editor (GUI)**
   - Tree view of configuration hierarchy
   - Inline validation with schema hints
   - Side-by-side environment comparison
   - Point-and-click migration wizard

2. **Terminal Dashboard (TUI)**
   - Environment overview panel
   - Real-time validation status
   - Interactive diff viewer
   - Migration preview with undo

3. **Shared Components Between CLI/GUI**
   - CONFIG_FORGE_ENGINE is UI-agnostic
   - All validation logic reusable
   - Diff algorithm independent of presentation
   - Report generation decoupled from output format

4. **Web Interface Potential**
   - CLI can output JSON for web consumption
   - Same engine could power REST API
   - Schema-driven form generation possible
