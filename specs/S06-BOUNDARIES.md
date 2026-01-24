# S06-BOUNDARIES.md
## simple_config - API Boundaries

**Generated:** 2026-01-23
**Type:** BACKWASH (reverse-engineered from implementation)

---

## 1. Public API Surface

### 1.1 Exported Features (Public)

#### Creation
- `make`
- `make_with_file`

#### Status Queries
- `file_path: STRING`
- `is_modified: BOOLEAN`
- `has_key (STRING): BOOLEAN`
- `keys_model: MML_SET [STRING]`

#### Value Access (String)
- `string_value (STRING): detachable STRING`
- `string_value_or_default (STRING, STRING): STRING`
- `string_value_or_env (STRING, STRING): detachable STRING`
- `string_value_or_env_or_default (STRING, STRING, STRING): STRING`

#### Value Access (Numeric)
- `integer_value (STRING): INTEGER`
- `integer_value_or_default (STRING, INTEGER): INTEGER`
- `integer_value_or_env (STRING, STRING, INTEGER): INTEGER`
- `real_value (STRING): DOUBLE`
- `real_value_or_default (STRING, DOUBLE): DOUBLE`

#### Value Access (Boolean)
- `boolean_value (STRING): BOOLEAN`
- `boolean_value_or_default (STRING, BOOLEAN): BOOLEAN`

#### Value Access (Arrays)
- `string_list (STRING): ARRAYED_LIST [STRING]`
- `integer_list (STRING): ARRAYED_LIST [INTEGER]`
- `real_list (STRING): ARRAYED_LIST [DOUBLE]`

#### Section Access
- `section (STRING): detachable SIMPLE_CONFIG`

#### Modification
- `set_string (STRING, STRING)`
- `set_integer (STRING, INTEGER)`
- `set_boolean (STRING, BOOLEAN)`
- `set_real (STRING, DOUBLE)`
- `set_section (STRING, SIMPLE_CONFIG)`
- `remove (STRING)`

#### File Operations
- `load`
- `save`
- `save_to (STRING)`
- `merge_file (STRING)`

#### Factory Support
- `section_type (STRING): detachable STRING`
- `has_section_type (STRING): BOOLEAN`
- `type_specification_at (STRING): STRING`

#### Output
- `to_json: STRING`
- `to_json_pretty: STRING`

### 1.2 Semi-Public Features

#### Exported to SIMPLE_CONFIG only
- `data: SIMPLE_JSON_OBJECT` - Internal JSON data
- `set_data (SIMPLE_JSON_OBJECT)` - Set internal data

## 2. Hidden Implementation

### 2.1 Private Features (NONE export)
- `env: EXECUTION_ENVIRONMENT` - Environment access
- `get_value_at_path (STRING): detachable SIMPLE_JSON_VALUE` - Dot notation navigation
- `merge_objects (SIMPLE_JSON_OBJECT, SIMPLE_JSON_OBJECT)` - Recursive merge

## 3. Dependency Boundaries

### 3.1 simple_json Dependency
- Uses: `SIMPLE_JSON`, `SIMPLE_JSON_OBJECT`, `SIMPLE_JSON_VALUE`, `SIMPLE_JSON_ARRAY`
- No direct exposure of simple_json types in public API
- All JSON details hidden behind STRING and primitive type interfaces

### 3.2 ISE base Dependency
- Uses: `STRING`, `ARRAYED_LIST`, `PLAIN_TEXT_FILE`, `EXECUTION_ENVIRONMENT`
- Standard Eiffel types exposed in public API

### 3.3 MML Dependency
- Uses: `MML_SET` for keys_model
- Mathematical model exposed for contract verification

## 4. Extension Points

### 4.1 Subclassing
- Class is not deferred
- Can be subclassed for specialized configurations
- `data` is accessible to descendants via SIMPLE_CONFIG export

### 4.2 Factory Pattern Support
- `section_type`, `has_section_type`, `type_specification_at` enable factory patterns
- Sections can specify their type via "_type" field
- Applications can use this for polymorphic configuration objects

## 5. Integration Patterns

### 5.1 Typical Usage
```eiffel
create config.make_with_file ("app.json")
host := config.string_value_or_env ("database.host", "DB_HOST")
port := config.integer_value_or_default ("database.port", 5432)
```

### 5.2 Hierarchical Override Pattern
```eiffel
create config.make_with_file ("defaults.json")
config.merge_file ("environment.json")
config.merge_file ("local.json")
-- Values from later files override earlier
```

### 5.3 Factory Integration
```eiffel
if attached config.section ("logger") as logger_config then
    if attached config.section_type ("logger") as type_name then
        logger := factory.create_by_name (type_name)
        logger.configure (logger_config)
    end
end
```
