# ConfigAudit - Ecosystem Integration

**Version:** 1.0
**Status:** Design Complete

---

## simple_* Dependencies

### Required Libraries

| Library | Purpose | Integration Point |
|---------|---------|-------------------|
| simple_config | Configuration file access | Loading configs, baselines |
| simple_json | Schema validation, report data | Baseline parsing, JSON output |
| simple_cli | Command-line argument parsing | CLI interface layer |
| simple_diff | Comparison engine | Actual vs expected comparison |
| simple_file | File system operations | Evidence collection, report output |

### Optional Libraries

| Library | Purpose | When Needed |
|---------|---------|-------------|
| simple_template | Report rendering | HTML/PDF report generation |
| simple_csv | CSV export | Export findings to spreadsheet |
| simple_sql | Audit history storage | Trend analysis, history queries |
| simple_datetime | Timestamp handling | Audit timestamps, date ranges |
| simple_validation | Baseline validation | Schema enforcement |
| simple_logger | Audit logging | Operation tracking |

---

## Integration Patterns

### simple_config Integration

**Purpose:** Load configuration files and baseline definitions

**Usage:**
```eiffel
class BASELINE_MANAGER

feature -- Loading

    load_baseline (a_path: STRING): COMPLIANCE_BASELINE
            -- Load compliance baseline from JSON file.
        local
            l_config: SIMPLE_CONFIG
        do
            create l_config.make_with_file (a_path)

            create Result.make
            Result.set_name (l_config.string_value_or_default ("baseline.name", "Unnamed"))
            Result.set_version (l_config.string_value_or_default ("baseline.version", "1.0"))
            Result.set_framework (l_config.string_value ("baseline.framework"))

            -- Load control coverage
            Result.set_controls (l_config.string_list ("baseline.controls_covered"))

            -- Load setting definitions
            if attached l_config.section ("baseline.settings") as l_settings then
                load_settings (l_settings, Result)
            end
        end

    load_actual_config (a_path: STRING): SIMPLE_CONFIG
            -- Load actual configuration for comparison.
        do
            create Result.make_with_file (a_path)
        ensure
            result_exists: Result /= Void
        end

feature {NONE} -- Implementation

    load_settings (a_settings: SIMPLE_CONFIG; a_baseline: COMPLIANCE_BASELINE)
            -- Load setting definitions into baseline.
        do
            across a_settings.keys_model as l_key loop
                if attached a_settings.section (l_key.item) as l_def then
                    a_baseline.add_setting (create {BASELINE_SETTING}.make_from_config (l_key.item, l_def))
                end
            end
        end

end
```

**Data flow:** Baseline JSON -> SIMPLE_CONFIG -> Parse sections -> COMPLIANCE_BASELINE

### simple_diff Integration

**Purpose:** Compare actual configuration values against baseline expectations

**Usage:**
```eiffel
class CONFIG_COMPARATOR

feature -- Comparison

    compare_to_baseline (a_actual: SIMPLE_CONFIG; a_baseline: COMPLIANCE_BASELINE): AUDIT_RESULT
            -- Compare actual config against baseline, return findings.
        local
            l_differ: SIMPLE_DIFF
            l_setting: BASELINE_SETTING
            l_actual_value: detachable STRING
            l_finding: AUDIT_FINDING
        do
            create l_differ
            create Result.make (a_baseline.name, a_baseline.version)

            across a_baseline.settings as l_s loop
                l_setting := l_s.item
                l_actual_value := a_actual.string_value (l_setting.key)

                if l_actual_value = Void then
                    -- Setting missing entirely
                    Result.add_finding (create {AUDIT_FINDING}.make_missing (
                        l_setting.key,
                        l_setting.expected_value,
                        l_setting.severity,
                        l_setting.control,
                        l_setting.rationale
                    ))
                elseif not setting_matches (l_setting, l_actual_value) then
                    -- Setting doesn't match expectation
                    Result.add_finding (create {AUDIT_FINDING}.make_mismatch (
                        l_setting.key,
                        l_setting.expected_value,
                        l_actual_value,
                        l_setting.severity,
                        l_setting.control,
                        l_setting.rationale,
                        l_setting.remediation
                    ))
                else
                    -- Setting is compliant
                    Result.add_compliant (create {COMPLIANT_SETTING}.make (
                        l_setting.key,
                        l_setting.expected_value,
                        l_actual_value,
                        l_setting.control
                    ))
                end
            end

            Result.calculate_compliance_percentage
        end

feature {NONE} -- Matching

    setting_matches (a_setting: BASELINE_SETTING; a_actual: STRING): BOOLEAN
            -- Does actual value match the setting expectation?
        do
            inspect a_setting.comparison_type
            when Exact then
                Result := a_setting.expected_value.same_string (a_actual)
            when Minimum then
                Result := a_actual.to_integer >= a_setting.min_value
            when Maximum then
                Result := a_actual.to_integer <= a_setting.max_value
            when Range then
                Result := a_actual.to_integer >= a_setting.min_value and
                          a_actual.to_integer <= a_setting.max_value
            when Alternatives then
                Result := a_setting.alternatives.has (a_actual)
            when Pattern then
                Result := a_actual.matches (a_setting.pattern)
            end
        end

end
```

**Data flow:** SIMPLE_CONFIG + COMPLIANCE_BASELINE -> Compare each setting -> AUDIT_RESULT

### simple_template Integration

**Purpose:** Generate formatted compliance reports

**Usage:**
```eiffel
class REPORT_GENERATOR

feature -- Report Generation

    generate_html_report (a_result: AUDIT_RESULT; a_template: STRING): STRING
            -- Generate HTML compliance report.
        local
            l_template_engine: SIMPLE_TEMPLATE
            l_context: TEMPLATE_CONTEXT
        do
            create l_template_engine.make
            l_template_engine.load_template (a_template)

            create l_context.make
            l_context.put_string ("baseline_name", a_result.baseline_name)
            l_context.put_string ("baseline_version", a_result.baseline_version)
            l_context.put_string ("framework", a_result.framework)
            l_context.put_string ("timestamp", a_result.timestamp.out)
            l_context.put_real ("compliance_percentage", a_result.compliance_percentage)
            l_context.put_integer ("total_settings", a_result.total_settings)
            l_context.put_integer ("compliant_count", a_result.compliant_count)
            l_context.put_integer ("finding_count", a_result.finding_count)

            -- Add findings by severity
            l_context.put_list ("critical_findings", findings_to_list (a_result.critical_findings))
            l_context.put_list ("high_findings", findings_to_list (a_result.high_findings))
            l_context.put_list ("medium_findings", findings_to_list (a_result.medium_findings))
            l_context.put_list ("low_findings", findings_to_list (a_result.low_findings))

            -- Add compliant settings
            l_context.put_list ("compliant_settings", compliant_to_list (a_result.compliant_settings))

            Result := l_template_engine.render (l_context)
        end

    generate_pdf_report (a_result: AUDIT_RESULT; a_template: STRING; a_output_path: STRING)
            -- Generate PDF compliance report.
        local
            l_html: STRING
        do
            -- Generate HTML first, then convert to PDF
            l_html := generate_html_report (a_result, a_template)
            html_to_pdf (l_html, a_output_path)
        end

end
```

**Data flow:** AUDIT_RESULT + Template -> SIMPLE_TEMPLATE.render -> HTML/PDF output

### simple_csv Integration

**Purpose:** Export findings to spreadsheet format

**Usage:**
```eiffel
class FINDING_EXPORTER

feature -- Export

    export_to_csv (a_result: AUDIT_RESULT): STRING
            -- Export findings to CSV format.
        local
            l_csv: SIMPLE_CSV_WRITER
        do
            create l_csv.make

            -- Header row
            l_csv.add_row (<<"Setting", "Expected", "Actual", "Status", "Severity", "Control", "Rationale", "Remediation">>)

            -- Finding rows
            across a_result.all_findings as l_f loop
                l_csv.add_row (<<
                    l_f.item.setting,
                    l_f.item.expected,
                    l_f.item.actual,
                    l_f.item.status,
                    l_f.item.severity,
                    l_f.item.control,
                    l_f.item.rationale,
                    l_f.item.remediation
                >>)
            end

            Result := l_csv.to_string
        end

    export_findings_for_remediation (a_result: AUDIT_RESULT; a_output_path: STRING)
            -- Export non-compliant findings to CSV for remediation tracking.
        local
            l_csv: SIMPLE_CSV_WRITER
            l_file: SIMPLE_FILE
        do
            create l_csv.make

            l_csv.add_row (<<"ID", "Setting", "Expected", "Actual", "Severity", "Control", "Remediation", "Status", "Assignee", "Due Date">>)

            across a_result.findings as l_f loop
                l_csv.add_row (<<
                    l_f.item.id,
                    l_f.item.setting,
                    l_f.item.expected,
                    l_f.item.actual,
                    l_f.item.severity,
                    l_f.item.control,
                    l_f.item.remediation,
                    "Open",
                    "",
                    ""
                >>)
            end

            create l_file.make_create_write (a_output_path)
            l_file.put_string (l_csv.to_string)
            l_file.close
        end

end
```

**Data flow:** AUDIT_RESULT -> Iterate findings -> SIMPLE_CSV_WRITER -> CSV string/file

### simple_sql Integration

**Purpose:** Store audit history for trend analysis

**Usage:**
```eiffel
class AUDIT_STORE

feature -- Storage

    store_audit_result (a_result: AUDIT_RESULT)
            -- Store audit result for historical analysis.
        local
            l_db: SIMPLE_SQL
            l_stmt: SIMPLE_SQL_STATEMENT
        do
            l_db := get_database

            -- Store summary
            l_stmt := l_db.prepare ("INSERT INTO audit_results (baseline, version, framework, timestamp, total, compliant, compliance_pct) VALUES (?, ?, ?, ?, ?, ?, ?)")
            l_stmt.bind_string (1, a_result.baseline_name)
            l_stmt.bind_string (2, a_result.baseline_version)
            l_stmt.bind_string (3, a_result.framework)
            l_stmt.bind_string (4, a_result.timestamp.out)
            l_stmt.bind_integer (5, a_result.total_settings)
            l_stmt.bind_integer (6, a_result.compliant_count)
            l_stmt.bind_real (7, a_result.compliance_percentage)
            l_stmt.execute

            -- Store individual findings
            across a_result.findings as l_f loop
                store_finding (l_db, a_result.id, l_f.item)
            end
        end

    query_trend (a_baseline: STRING; a_period: INTEGER): ARRAYED_LIST [TREND_POINT]
            -- Query compliance trend for baseline over period (days).
        local
            l_db: SIMPLE_SQL
            l_stmt: SIMPLE_SQL_STATEMENT
            l_point: TREND_POINT
        do
            create Result.make (a_period)
            l_db := get_database

            l_stmt := l_db.prepare ("SELECT timestamp, compliance_pct, total - compliant as findings FROM audit_results WHERE baseline = ? AND timestamp >= date('now', '-' || ? || ' days') ORDER BY timestamp")
            l_stmt.bind_string (1, a_baseline)
            l_stmt.bind_integer (2, a_period)

            from l_stmt.execute until l_stmt.after loop
                create l_point.make (
                    l_stmt.column_string (1),
                    l_stmt.column_real (2),
                    l_stmt.column_integer (3)
                )
                Result.extend (l_point)
                l_stmt.forth
            end
        end

end
```

**Data flow:** AUDIT_RESULT -> SIMPLE_SQL insert -> SQLite storage -> Query -> TREND_POINT list

---

## Dependency Graph

```
config_audit (application)
    |
    +-- simple_config (required)
    |       |
    |       +-- simple_json (transitive)
    |
    +-- simple_json (required - for baseline schemas)
    |
    +-- simple_cli (required)
    |
    +-- simple_diff (required)
    |
    +-- simple_file (required)
    |
    +-- simple_template (optional - HTML/PDF reports)
    |
    +-- simple_csv (optional - export to spreadsheet)
    |
    +-- simple_sql (optional - audit history)
    |
    +-- simple_datetime (optional - date handling)
    |
    +-- simple_validation (optional - baseline validation)
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
        name="config_audit"
        uuid="C3D4E5F6-A7B8-9012-CDEF-345678901234">

    <description>ConfigAudit - Configuration compliance auditor</description>

    <!-- Library target (reusable core) -->
    <target name="config_audit">
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
        <library name="simple_diff" location="$SIMPLE_EIFFEL/simple_diff/simple_diff.ecf"/>
        <library name="simple_file" location="$SIMPLE_EIFFEL/simple_file/simple_file.ecf"/>
        <library name="simple_template" location="$SIMPLE_EIFFEL/simple_template/simple_template.ecf"/>
        <library name="simple_csv" location="$SIMPLE_EIFFEL/simple_csv/simple_csv.ecf"/>

        <!-- ISE dependencies -->
        <library name="base" location="$ISE_LIBRARY/library/base/base.ecf"/>
        <library name="time" location="$ISE_LIBRARY/library/time/time.ecf"/>

        <!-- Source -->
        <cluster name="src" location=".\src\" recursive="true"/>
    </target>

    <!-- CLI executable target -->
    <target name="config_audit_cli" extends="config_audit">
        <root class="CONFIG_AUDIT_CLI" feature="make"/>
        <setting name="executable_name" value="config-audit"/>
    </target>

    <!-- Test target -->
    <target name="config_audit_tests" extends="config_audit">
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
| Baseline loading | simple_config, simple_json | Complex baselines parse correctly |
| Config comparison | simple_config, simple_diff | Findings accurately detected |
| Report generation | simple_template | HTML renders correctly |
| CSV export | simple_csv | Valid CSV output |
| History storage | simple_sql | Data persists and queries |

### Example Integration Test

```eiffel
class TEST_CONFIG_AUDIT_INTEGRATION

inherit
    SIMPLE_TEST_SET

feature -- Tests

    test_compare_with_findings
            -- Test comparison that produces findings.
        local
            l_engine: CONFIG_AUDIT_ENGINE
            l_result: AUDIT_RESULT
        do
            create l_engine.make

            -- Load baseline
            l_engine.load_baseline ("test_data/baseline.json")

            -- Compare against non-compliant config
            l_result := l_engine.compare ("test_data/non_compliant.json")

            assert ("Has findings", l_result.finding_count > 0)
            assert ("Critical finding present",
                l_result.has_finding_for ("security.ssl_enabled"))
            assert ("Compliance below 100",
                l_result.compliance_percentage < 100.0)
        end

    test_trend_analysis
            -- Test trend analysis over historical data.
        local
            l_analyzer: TREND_ANALYZER
            l_trend: ARRAYED_LIST [TREND_POINT]
        do
            create l_analyzer.make ("test_data/audit_history.db")

            l_trend := l_analyzer.analyze ("production", 90)

            assert ("Trend data returned", not l_trend.is_empty)
            assert ("Multiple data points", l_trend.count >= 3)
        end

end
```
