# S03-CONTRACTS.md
## simple_config - Contracts Specification

**Generated:** 2026-01-23
**Type:** BACKWASH (reverse-engineered from implementation)

---

## 1. Creation Contracts

### make
```eiffel
ensure
    empty_config: keys_model.is_empty
    empty_path: file_path.is_empty
    not_modified: not is_modified
```

### make_with_file
```eiffel
require
    path_not_empty: not a_file_path.is_empty
ensure
    path_set: file_path = a_file_path
```

## 2. Query Contracts

### has_key
```eiffel
require
    key_not_empty: not a_key.is_empty
```

### string_value
```eiffel
require
    key_not_empty: not a_key.is_empty
```

### string_value_or_default
```eiffel
require
    key_not_empty: not a_key.is_empty
```

### string_value_or_env
```eiffel
require
    key_not_empty: not a_key.is_empty
    env_var_not_empty: not a_env_var.is_empty
```

### string_value_or_env_or_default
```eiffel
require
    key_not_empty: not a_key.is_empty
    env_var_not_empty: not a_env_var.is_empty
```

### integer_value, boolean_value, real_value
```eiffel
require
    key_not_empty: not a_key.is_empty
```

### string_list, integer_list, real_list
```eiffel
require
    key_not_empty: not a_key.is_empty
```

### section
```eiffel
require
    key_not_empty: not a_key.is_empty
```

## 3. Command Contracts

### set_string
```eiffel
require
    key_not_empty: not a_key.is_empty
ensure
    modified: is_modified
    key_present: keys_model [a_key]
    keys_extended: keys_model >= old keys_model
```

### set_integer
```eiffel
require
    key_not_empty: not a_key.is_empty
ensure
    modified: is_modified
    key_present: keys_model [a_key]
    keys_extended: keys_model >= old keys_model
```

### set_boolean
```eiffel
require
    key_not_empty: not a_key.is_empty
ensure
    modified: is_modified
    key_present: keys_model [a_key]
    keys_extended: keys_model >= old keys_model
```

### set_real
```eiffel
require
    key_not_empty: not a_key.is_empty
ensure
    modified: is_modified
    key_present: keys_model [a_key]
    keys_extended: keys_model >= old keys_model
```

### set_section
```eiffel
require
    key_not_empty: not a_key.is_empty
ensure
    modified: is_modified
    key_present: keys_model [a_key]
    keys_extended: keys_model >= old keys_model
```

### remove
```eiffel
require
    key_not_empty: not a_key.is_empty
ensure
    modified: is_modified
    key_removed: not keys_model [a_key]
    keys_shrunk_or_equal: keys_model <= old keys_model
```

### save
```eiffel
require
    has_file_path: not file_path.is_empty
ensure
    not_modified: not is_modified
```

### save_to
```eiffel
require
    path_not_empty: not a_file_path.is_empty
ensure
    path_set: file_path = a_file_path
    not_modified: not is_modified
```

### merge_file
```eiffel
require
    path_not_empty: not a_file_path.is_empty
```

## 4. Class Invariants

```eiffel
invariant
    data_exists: data /= Void
    env_exists: env /= Void
    file_path_exists: file_path /= Void
```

## 5. Contract Design Principles

1. **Key Validation**: All key parameters must be non-empty
2. **Modification Tracking**: All setters mark config as modified
3. **Key Presence**: After set operations, key is guaranteed present
4. **Monotonicity**: Set operations extend keys; remove shrinks keys
5. **File Path Consistency**: Save operations require valid path
