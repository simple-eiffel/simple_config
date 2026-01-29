# ConfigForge - Build Plan

**Version:** 1.0
**Status:** Design Complete

---

## Phase Overview

| Phase | Deliverable | Effort | Dependencies |
|-------|-------------|--------|--------------|
| Phase 1 | MVP CLI (merge, validate) | 5 days | simple_config, simple_cli, simple_json |
| Phase 2 | Full CLI (diff, migrate, export) | 5 days | Phase 1 + simple_diff |
| Phase 3 | Production Polish | 3 days | Phase 2 complete |

---

## Phase 1: MVP

### Objective

Deliver a functional CLI that can merge configuration files and validate them against a schema. This proves the core value proposition: unified configuration management with validation.

### Deliverables

1. **CONFIG_FORGE_CLI** - Main entry point with command routing
2. **CONFIG_FORGE_ENGINE** - Core orchestration class
3. **CONFIG_MERGER** - Hierarchical file merging
4. **CONFIG_VALIDATOR** - Schema-based validation
5. **CONFIG_SCHEMA** - Schema definition handling
6. **Basic CLI** - `merge` and `validate` commands

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T1.1 | Create project structure with ECF | Compiles with all dependencies |
| T1.2 | Implement CONFIG_FORGE_CLI skeleton | Parses `--help` and `--version` |
| T1.3 | Implement CONFIG_MERGER.merge_files | Merges 2+ JSON files correctly |
| T1.4 | Implement environment overlay support | `--env dev` loads dev.json overlay |
| T1.5 | Implement CONFIG_SCHEMA.load | Parses schema JSON into rules |
| T1.6 | Implement CONFIG_VALIDATOR.validate | Returns list of validation errors |
| T1.7 | Implement `merge` command | Outputs merged JSON to stdout/file |
| T1.8 | Implement `validate` command | Exits 0/3 based on validation |
| T1.9 | Write unit tests for merger | 90% coverage of merge logic |
| T1.10 | Write unit tests for validator | 90% coverage of validation logic |

### Test Cases (Phase 1)

| Test | Input | Expected Output |
|------|-------|-----------------|
| Merge two files | base.json + dev.json | Combined config with dev overrides |
| Merge with env | base.json --env prod | Combined with production.json |
| Validate valid config | valid.json + schema.json | Exit 0, no errors |
| Validate invalid config | invalid.json + schema.json | Exit 3, error list |
| Validate missing required | missing.json + schema.json | "required field missing" error |
| Validate wrong type | wrongtype.json + schema.json | "type mismatch" error |

### Phase 1 Class Structure

```eiffel
-- src/config_forge_cli.e
class CONFIG_FORGE_CLI
create make
feature
    make
    register_commands
    do_merge
    do_validate
end

-- src/config_forge_engine.e
class CONFIG_FORGE_ENGINE
create make
feature
    merger: CONFIG_MERGER
    validator: CONFIG_VALIDATOR
    merge_files (base, overlays): SIMPLE_CONFIG
    load_schema (path)
    validate (config): LIST [VALIDATION_ERROR]
end

-- src/config_merger.e
class CONFIG_MERGER
create make
feature
    merge_files (base, overlays): SIMPLE_CONFIG
    apply_env_overlay (config, env_name): SIMPLE_CONFIG
end

-- src/config_validator.e
class CONFIG_VALIDATOR
create make
feature
    schema: CONFIG_SCHEMA
    load_schema (path)
    validate (config): ARRAYED_LIST [VALIDATION_ERROR]
end

-- src/config_schema.e
class CONFIG_SCHEMA
create make, make_from_file
feature
    rules: ARRAYED_LIST [VALIDATION_RULE]
    load (path)
    property_rule (key): VALIDATION_RULE
end
```

---

## Phase 2: Full Implementation

### Objective

Add the remaining commands (diff, migrate, export) to complete the full CLI feature set.

### Deliverables

1. **CONFIG_DIFFER** - Configuration comparison engine
2. **CONFIG_MIGRATOR** - Schema migration handler
3. **CONFIG_EXPORTER** - Multi-format export
4. **Extended CLI** - `diff`, `migrate`, `export`, `info` commands

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T2.1 | Implement CONFIG_DIFFER.compare_configs | Detects added/removed/changed keys |
| T2.2 | Implement diff output formatting | Color-coded +/-/~ output |
| T2.3 | Implement `diff` command | Shows differences, supports --fail-on-diff |
| T2.4 | Implement CONFIG_MIGRATOR | Loads migration definitions |
| T2.5 | Implement migration transforms | rename, add, remove, convert |
| T2.6 | Implement `migrate` command | Transforms config, supports --dry-run |
| T2.7 | Implement CONFIG_EXPORTER | json, env, properties formats |
| T2.8 | Implement `export` command | Outputs in requested format |
| T2.9 | Implement `info` command | Shows config metadata |
| T2.10 | Write integration tests | All commands tested end-to-end |

### Test Cases (Phase 2)

| Test | Input | Expected Output |
|------|-------|-----------------|
| Diff identical configs | a.json, a.json | "No differences", exit 0 |
| Diff with additions | a.json, b.json (b has more) | Shows + lines |
| Diff with removals | a.json, b.json (b has less) | Shows - lines |
| Diff with changes | a.json, b.json (different values) | Shows ~ lines |
| Diff fail on diff | different configs --fail-on-diff | Exit 10 |
| Migrate rename | old.json + rename migration | Key renamed |
| Migrate add | old.json + add migration | Key added with default |
| Migrate dry-run | any + --dry-run | Shows changes, no file modified |
| Export to env | config.json --format env | KEY=value lines |
| Export with prefix | config.json --format env --prefix APP_ | APP_KEY=value |

### Phase 2 Class Additions

```eiffel
-- src/config_differ.e
class CONFIG_DIFFER
create make
feature
    compare_configs (c1, c2): CONFIG_DIFF_RESULT
    format_diff (result): STRING
end

-- src/config_diff_result.e
class CONFIG_DIFF_RESULT
create make
feature
    additions: LIST [STRING]
    removals: LIST [STRING]
    modifications: LIST [STRING]
    has_differences: BOOLEAN
end

-- src/config_migrator.e
class CONFIG_MIGRATOR
create make
feature
    load_migration (path)
    migrate (config): SIMPLE_CONFIG
    preview_migration (config): STRING
end

-- src/config_exporter.e
class CONFIG_EXPORTER
create make
feature
    export_json (config): STRING
    export_env (config, prefix): STRING
    export_properties (config): STRING
end
```

---

## Phase 3: Production Polish

### Objective

Harden the application for production use with comprehensive error handling, documentation, and performance optimization.

### Deliverables

1. **Error handling hardening** - Graceful failures with actionable messages
2. **Help documentation** - Complete `--help` for all commands
3. **Configuration validation** - Validate config-forge.json itself
4. **Performance optimization** - Efficient handling of large configs
5. **README and examples** - User documentation

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T3.1 | Add comprehensive error messages | All error codes documented |
| T3.2 | Add file existence checks | Graceful error before parse |
| T3.3 | Add JSON parse error details | Line/column in error message |
| T3.4 | Implement `--help` for each command | Full usage shown |
| T3.5 | Add example configurations | Working examples in repo |
| T3.6 | Write README.md | Installation, usage, examples |
| T3.7 | Performance test with large configs | 10MB config in < 1s |
| T3.8 | Add config-forge.json support | Tool self-configuration |
| T3.9 | Final integration testing | All scenarios pass |
| T3.10 | Create release build | Finalized executable |

---

## ECF Target Structure

```xml
<!-- Library target (reusable) -->
<target name="config_forge">
    <root all_classes="true"/>
    <!-- Dependencies and source clusters -->
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
```

---

## Build Commands

```bash
# Compile CLI (workbench)
/d/prod/ec.sh -batch -config config_forge.ecf -target config_forge_cli -c_compile

# Compile CLI (finalized for release)
/d/prod/ec.sh -batch -config config_forge.ecf -target config_forge_cli -finalize -c_compile

# Run tests
/d/prod/ec.sh -batch -config config_forge.ecf -target config_forge_tests -c_compile
./EIFGENs/config_forge_tests/W_code/config_forge.exe

# Finalized test run
/d/prod/ec.sh -batch -config config_forge.ecf -target config_forge_tests -finalize -c_compile
./EIFGENs/config_forge_tests/F_code/config_forge.exe
```

---

## Success Criteria

| Criterion | Measure | Target |
|-----------|---------|--------|
| Compiles | Zero errors, zero warnings | 100% |
| Tests pass | All unit and integration tests | 100% |
| CLI functional | All 6 commands working | Functional |
| Error handling | No crashes on invalid input | Graceful errors |
| Documentation | README, --help complete | Yes |
| Performance | 10MB config handling | < 1 second |

---

## Risk Mitigation

| Risk | Mitigation |
|------|------------|
| simple_diff API changes | Pin version, add abstraction layer |
| Large config performance | Stream parsing, lazy evaluation |
| Schema complexity | Start simple, iterate based on feedback |
| Cross-platform issues | Test on Windows (primary), Linux |

---

## Post-MVP Roadmap

| Feature | Priority | Effort |
|---------|----------|--------|
| YAML export support | Medium | 1 day |
| Config history/versioning | Medium | 3 days |
| Remote config sources | Low | 5 days |
| Web API wrapper | Low | 5 days |
| TUI interface | Low | 5 days |
