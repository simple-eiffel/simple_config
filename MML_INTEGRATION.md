# MML Integration - simple_config

## Overview
Applied X03 Contract Assault with simple_mml on 2025-01-21.

## MML Classes Used
- `MML_SET [STRING]` - Models configuration keys

## Model Queries Added
- `keys_model: MML_SET [STRING]` - Set of all top-level config keys

## Model-Based Postconditions
| Feature | Postcondition | Purpose |
|---------|---------------|---------|
| `make` | `empty_config: keys_model.is_empty` | Starts empty |
| `set_string` | `key_present`, `keys_extended` | Key added to model |
| `set_integer` | `key_present`, `keys_extended` | Key added to model |
| `set_boolean` | `key_present`, `keys_extended` | Key added to model |
| `set_real` | `key_present`, `keys_extended` | Key added to model |
| `set_section` | `key_present`, `keys_extended` | Key added to model |
| `remove` | `key_removed`, `keys_shrunk_or_equal` | Key removed from model |

## Invariants Added
- `data_exists` - Data map attached
- `env_exists` - Env map attached
- `file_path_exists` - File path attached

## Bugs Found
None (1 redundant precondition removed)

## Test Results
- Compilation: SUCCESS
- Tests: 12/12 PASS
