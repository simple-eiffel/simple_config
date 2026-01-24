# S05-CONSTRAINTS.md
## simple_config - Constraints and Limitations

**Generated:** 2026-01-23
**Type:** BACKWASH (reverse-engineered from implementation)

---

## 1. Format Constraints

### 1.1 JSON-Only
- **Constraint:** Only JSON format supported
- **Rationale:** Consistency with simple_json dependency
- **Impact:** No YAML, TOML, INI, or .env file support

### 1.2 UTF-8 Compatible
- **Constraint:** Values stored as STRING_32 internally
- **Rationale:** Eiffel JSON library uses STRING_32
- **Impact:** Some Unicode characters may not round-trip through STRING_8 conversion

## 2. Access Constraints

### 2.1 Dot Notation (Read-Only)
- **Constraint:** Dot notation works for reading only
- **Rationale:** Writing to nested paths requires path creation logic
- **Impact:** Use `section()` and `set_section()` for nested writes

### 2.2 Key Requirements
- **Constraint:** All keys must be non-empty strings
- **Rationale:** Empty keys are meaningless in JSON
- **Impact:** Precondition failure if empty key provided

### 2.3 Type Coercion
- **Constraint:** No automatic type coercion
- **Rationale:** Type safety
- **Impact:** `integer_value` returns 0 for string "123"

## 3. File Operation Constraints

### 3.1 Save Path Required
- **Constraint:** `save` requires non-empty `file_path`
- **Rationale:** Cannot save without destination
- **Impact:** Use `save_to` if path not set during creation

### 3.2 No Atomic Writes
- **Constraint:** File writes are not atomic
- **Rationale:** Simple implementation
- **Impact:** Crash during save may corrupt file

### 3.3 Encoding
- **Constraint:** Files written as plain text
- **Rationale:** JSON is text-based
- **Impact:** BOM not written; assumes UTF-8

## 4. Environment Variable Constraints

### 4.1 String-Only Environment
- **Constraint:** Environment variables are strings
- **Rationale:** OS limitation
- **Impact:** `integer_value_or_env` must parse string

### 4.2 No Prefix Loading
- **Constraint:** No bulk environment loading (like "MYAPP_*")
- **Rationale:** Not implemented in current version
- **Impact:** Each env var must be accessed individually

## 5. Thread Safety Constraints

### 5.1 No Synchronization
- **Constraint:** Not thread-safe for concurrent modification
- **Rationale:** SCOOP should handle synchronization
- **Impact:** Use separate_config for multi-processor access

## 6. Memory Constraints

### 6.1 Full Load
- **Constraint:** Entire config loaded into memory
- **Rationale:** Simple access model
- **Impact:** Very large config files may use significant memory

## 7. Feature Gaps (vs Research Recommendations)

| Feature | Status | Notes |
|---------|--------|-------|
| Dot notation (read) | Implemented | Full path navigation |
| Dot notation (write) | Not implemented | Use sections |
| Environment fallback | Implemented | Per-key only |
| Environment prefix | Not implemented | No MYAPP_* bulk load |
| File watch/reload | Not implemented | Manual reload required |
| Schema validation | Not implemented | No required field validation |
| Pretty printing | Implemented | Via simple_json |
| Typed arrays | Implemented | string_list, integer_list, real_list |
| File merge | Implemented | Overlay configs supported |
