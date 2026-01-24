# S04-FEATURE-SPECS.md
## simple_config - Feature Specifications

**Generated:** 2026-01-23
**Type:** BACKWASH (reverse-engineered from implementation)

---

## 1. Core Value Access Features

### 1.1 String Access

#### string_value
**Signature:** `string_value (a_key: STRING): detachable STRING`
**Purpose:** Get string value for key with dot notation support
**Behavior:**
- Navigates dot-separated paths (e.g., "database.host")
- Returns Void if key not found or value is not a string
- Converts STRING_32 to STRING_8

#### string_value_or_default
**Signature:** `string_value_or_default (a_key, a_default: STRING): STRING`
**Purpose:** Get string value with fallback default
**Behavior:**
- Returns value if found, otherwise returns default
- Never returns Void

#### string_value_or_env
**Signature:** `string_value_or_env (a_key, a_env_var: STRING): detachable STRING`
**Purpose:** Get string from config or environment variable
**Behavior:**
- First checks config file
- Falls back to environment variable if not in config
- Returns Void if neither source has value

#### string_value_or_env_or_default
**Signature:** `string_value_or_env_or_default (a_key, a_env_var, a_default: STRING): STRING`
**Purpose:** Hierarchical value resolution with guaranteed result
**Behavior:**
- Config file > Environment variable > Default value
- Never returns Void

### 1.2 Numeric Access

#### integer_value
**Signature:** `integer_value (a_key: STRING): INTEGER`
**Purpose:** Get integer value (0 if not found)
**Behavior:**
- Supports dot notation
- Returns 0 for missing keys or non-numeric values

#### integer_value_or_default
**Signature:** `integer_value_or_default (a_key: STRING; a_default: INTEGER): INTEGER`
**Purpose:** Get integer with fallback

#### integer_value_or_env
**Signature:** `integer_value_or_env (a_key, a_env_var: STRING; a_default: INTEGER): INTEGER`
**Purpose:** Get integer from config, environment, or default
**Behavior:**
- Parses environment variable string to integer if needed
- Returns default if env var is not a valid integer

#### real_value
**Signature:** `real_value (a_key: STRING): DOUBLE`
**Purpose:** Get floating-point value (0.0 if not found)

### 1.3 Boolean Access

#### boolean_value
**Signature:** `boolean_value (a_key: STRING): BOOLEAN`
**Purpose:** Get boolean value (False if not found)

### 1.4 Array Access

#### string_list
**Signature:** `string_list (a_key: STRING): ARRAYED_LIST [STRING]`
**Purpose:** Get array of strings
**Behavior:**
- Returns empty list if key not found or not an array
- Skips non-string elements

#### integer_list
**Signature:** `integer_list (a_key: STRING): ARRAYED_LIST [INTEGER]`
**Purpose:** Get array of integers
**Behavior:**
- Returns empty list if key not found
- Skips non-numeric elements

#### real_list
**Signature:** `real_list (a_key: STRING): ARRAYED_LIST [DOUBLE]`
**Purpose:** Get array of floating-point values

## 2. Section Access Features

#### section
**Signature:** `section (a_key: STRING): detachable SIMPLE_CONFIG`
**Purpose:** Get nested configuration section
**Behavior:**
- Returns new SIMPLE_CONFIG wrapping nested object
- Returns Void if key not found or value is not an object
- Supports dot notation for nested path navigation

## 3. Modification Features

### 3.1 Value Setting

All setters:
- Mark configuration as modified
- Do NOT support dot notation (use sections instead)
- Update the model to reflect new keys

#### set_string
**Signature:** `set_string (a_key, a_value: STRING)`

#### set_integer
**Signature:** `set_integer (a_key: STRING; a_value: INTEGER)`

#### set_boolean
**Signature:** `set_boolean (a_key: STRING; a_value: BOOLEAN)`

#### set_real
**Signature:** `set_real (a_key: STRING; a_value: DOUBLE)`

#### set_section
**Signature:** `set_section (a_key: STRING; a_section: SIMPLE_CONFIG)`
**Purpose:** Set nested configuration section

#### remove
**Signature:** `remove (a_key: STRING)`
**Purpose:** Remove key from configuration

## 4. File Operations

#### load
**Signature:** `load`
**Purpose:** Load configuration from file_path
**Behavior:**
- Does nothing if file_path is empty
- Parses JSON file using simple_json
- Resets is_modified to False

#### merge_file
**Signature:** `merge_file (a_file_path: STRING)`
**Purpose:** Merge another config file into current config
**Behavior:**
- Values from merged file override existing values
- Sets is_modified to True

#### save
**Signature:** `save`
**Purpose:** Save configuration to file_path
**Behavior:**
- Writes pretty-printed JSON
- Resets is_modified to False

#### save_to
**Signature:** `save_to (a_file_path: STRING)`
**Purpose:** Save to specified file
**Behavior:**
- Updates file_path to new location
- Writes pretty-printed JSON

## 5. Output Features

#### to_json
**Signature:** `to_json: STRING`
**Purpose:** Compact JSON representation

#### to_json_pretty
**Signature:** `to_json_pretty: STRING`
**Purpose:** Formatted/indented JSON representation

## 6. Factory Support Features

#### section_type
**Signature:** `section_type (a_key: STRING): detachable STRING`
**Purpose:** Get "_type" field from section for factory pattern

#### has_section_type
**Signature:** `has_section_type (a_key: STRING): BOOLEAN`
**Purpose:** Check if section has "_type" field

#### type_specification_at
**Signature:** `type_specification_at (a_key: STRING): STRING`
**Purpose:** Get type specification (empty string if not present)
