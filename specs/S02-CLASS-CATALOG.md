# S02-CLASS-CATALOG.md
## simple_config - Class Catalog

**Generated:** 2026-01-23
**Type:** BACKWASH (reverse-engineered from implementation)

---

## 1. Class Hierarchy

```
SIMPLE_JSON_CONSTANTS (inherited)
    |
    +-- SIMPLE_CONFIG (main facade)
```

## 2. Class Descriptions

### SIMPLE_CONFIG

**Purpose:** JSON-based configuration file management with dot notation, environment variable integration, and type-safe value access.

**Inheritance:**
- Inherits: `SIMPLE_JSON_CONSTANTS` (exports NONE)

**Creation Procedures:**
| Procedure | Parameters | Description |
|-----------|------------|-------------|
| `make` | None | Create empty configuration |
| `make_with_file` | `a_file_path: STRING` | Create configuration from file |

**Features by Category:**

#### Access
- `file_path: STRING` - Path to configuration file
- `is_modified: BOOLEAN` - Has configuration been modified since last save?

#### Model Queries
- `keys_model: MML_SET [STRING]` - Mathematical model of all top-level keys

#### Key Queries
- `has_key (a_key: STRING): BOOLEAN` - Does configuration have key? (supports dot notation)

#### String Access
- `string_value (a_key: STRING): detachable STRING`
- `string_value_or_default (a_key, a_default: STRING): STRING`
- `string_value_or_env (a_key, a_env_var: STRING): detachable STRING`
- `string_value_or_env_or_default (a_key, a_env_var, a_default: STRING): STRING`

#### Integer Access
- `integer_value (a_key: STRING): INTEGER`
- `integer_value_or_default (a_key: STRING; a_default: INTEGER): INTEGER`
- `integer_value_or_env (a_key, a_env_var: STRING; a_default: INTEGER): INTEGER`

#### Boolean Access
- `boolean_value (a_key: STRING): BOOLEAN`
- `boolean_value_or_default (a_key: STRING; a_default: BOOLEAN): BOOLEAN`

#### Real Access
- `real_value (a_key: STRING): DOUBLE`
- `real_value_or_default (a_key: STRING; a_default: DOUBLE): DOUBLE`

#### Array Access
- `string_list (a_key: STRING): ARRAYED_LIST [STRING]`
- `integer_list (a_key: STRING): ARRAYED_LIST [INTEGER]`
- `real_list (a_key: STRING): ARRAYED_LIST [DOUBLE]`

#### Section Access
- `section (a_key: STRING): detachable SIMPLE_CONFIG`

#### Element Change
- `set_string (a_key, a_value: STRING)`
- `set_integer (a_key: STRING; a_value: INTEGER)`
- `set_boolean (a_key: STRING; a_value: BOOLEAN)`
- `set_real (a_key: STRING; a_value: DOUBLE)`
- `set_section (a_key: STRING; a_section: SIMPLE_CONFIG)`
- `remove (a_key: STRING)`

#### File Operations
- `load` - Load configuration from file
- `merge_file (a_file_path: STRING)` - Merge another config file
- `save` - Save configuration to file
- `save_to (a_file_path: STRING)` - Save to specified file

#### Factory Support
- `section_type (a_key: STRING): detachable STRING`
- `has_section_type (a_key: STRING): BOOLEAN`
- `type_specification_at (a_key: STRING): STRING`

#### Output
- `to_json: STRING` - Compact JSON string
- `to_json_pretty: STRING` - Formatted JSON string

## 3. Internal Classes

### SIMPLE_JSON_OBJECT (from simple_json)
Used internally for JSON data storage.

### EXECUTION_ENVIRONMENT (from base)
Used for environment variable access.
