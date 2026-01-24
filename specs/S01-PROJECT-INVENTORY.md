# S01-PROJECT-INVENTORY.md
## simple_config - Project Inventory

**Generated:** 2026-01-23
**Type:** BACKWASH (reverse-engineered from implementation)
**Library:** simple_config
**Version:** 1.0

---

## 1. Project Overview

| Attribute | Value |
|-----------|-------|
| **Name** | simple_config |
| **Purpose** | JSON-based configuration file management |
| **Facade Class** | SIMPLE_CONFIG |
| **Author** | Larry Rix |
| **License** | MIT License |

## 2. Source Files

| File | Purpose |
|------|---------|
| `src/simple_config.e` | Main facade class for configuration management |
| `testing/lib_tests.e` | Test suite |
| `testing/test_app.e` | Test application |

## 3. Dependencies

### Internal (simple_* ecosystem)
- **simple_json** - JSON parsing and serialization

### External (ISE/Standard)
- **base** - EXECUTION_ENVIRONMENT, PLAIN_TEXT_FILE, STRING, ARRAYED_LIST
- **mml** - MML_SET for model queries

## 4. ECF Configuration

**Target:** simple_config
**Root Class:** SIMPLE_CONFIG

## 5. Design Philosophy

- JSON-first configuration storage
- Dot notation for nested access
- Environment variable integration
- Type-safe value access with default fallbacks
- File persistence with modification tracking

## 6. Compliance

- **Void Safety:** Full
- **SCOOP Ready:** Yes
- **Design by Contract:** Comprehensive preconditions, postconditions, invariants
