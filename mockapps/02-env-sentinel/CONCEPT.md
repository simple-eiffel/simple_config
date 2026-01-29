# EnvSentinel

**Environment variable and configuration sentinel that validates, syncs, and audits settings across deployments.**

---

## Executive Summary

EnvSentinel is a security-focused CLI tool that monitors, validates, and audits environment variables and configuration settings across deployment environments. It addresses the critical enterprise need for configuration governance: ensuring that applications are deployed with correct, compliant, and secure settings.

The tool acts as a "sentinel" standing guard over your configuration, preventing misconfigurations from reaching production, detecting configuration drift between environments, and maintaining an audit trail of all configuration changes for compliance purposes.

EnvSentinel competes with enterprise secrets management tools like HashiCorp Vault and Doppler but focuses specifically on the validation, monitoring, and compliance aspects rather than secrets storage. It's designed to work alongside existing secrets managers, not replace them.

---

## Problem Statement

**The problem:** Organizations struggle with configuration governance. Environment variables are globally accessible, hard to track, and often contain a mix of secrets and non-sensitive settings. There's no audit trail, no validation before deployment, and configuration drift goes undetected until it causes an outage.

**Current solutions:**
- HashiCorp Vault (complex, focused on secrets storage, not validation)
- Manual checklists before deployment (error-prone, doesn't scale)
- Post-incident forensics (reactive, not preventive)
- Environment-specific .env files (no validation, no audit trail)
- Custom scripts (fragmented, unmaintained)

**Our approach:** EnvSentinel provides a unified configuration governance framework:
1. Define configuration policies (required settings, allowed values, security rules)
2. Validate before deployment (CI/CD gate)
3. Monitor for drift between environments
4. Alert on policy violations
5. Generate compliance reports with full audit trail

---

## Target Users

| User Type | Description | Key Needs |
|-----------|-------------|-----------|
| Primary | Security Engineer | Policy enforcement, audit trails, compliance reports |
| Primary | SRE / Platform Engineer | Drift detection, deployment gates, monitoring |
| Secondary | DevOps Engineer | CI/CD integration, automated validation |
| Secondary | Compliance Officer | Audit reports, evidence collection |

---

## Value Proposition

**For** security engineers and platform teams
**Who** need to ensure configuration compliance across environments
**EnvSentinel** provides validation, monitoring, and auditing of environment variables and configurations
**Unlike** secrets managers that focus on storage, or manual processes that don't scale
**We** offer automated policy enforcement with audit trails for compliance

---

## Revenue Model

| Model | Description | Price Point |
|-------|-------------|-------------|
| Open Source Core | Basic validation, single environment | Free |
| Professional | Multi-env monitoring, drift detection, basic reports | $49/user/month |
| Enterprise | Compliance frameworks, SSO, advanced audit, alerts | $149/user/month |
| Compliance Add-ons | SOC2, HIPAA, PCI-DSS report templates | $500/framework |

---

## Success Metrics

| Metric | Target | Measurement |
|--------|--------|-------------|
| Configuration-related incidents | -90% | Incident post-mortems |
| Time to audit completion | -75% | Audit duration tracking |
| Policy violation detection | 100% before prod | CI/CD gate metrics |
| Configuration drift detection | < 1 hour | Monitoring latency |
| Compliance audit pass rate | 100% | Audit results |

---

## Key Features

### 1. Policy-Based Validation
```json
{
  "policies": {
    "database_url": {
      "required": true,
      "pattern": "^postgres://",
      "environments": ["staging", "production"],
      "sensitivity": "secret"
    },
    "log_level": {
      "required": true,
      "allowed_values": ["debug", "info", "warn", "error"],
      "production_only": ["warn", "error"]
    },
    "api_rate_limit": {
      "required": true,
      "type": "integer",
      "min": 100,
      "max": 10000
    }
  }
}
```

### 2. Drift Detection
```
$ env-sentinel drift staging production
Drift Report: staging vs production

MISSING in production:
  - FEATURE_BETA_ENABLED (present in staging)

VALUE DIFFERENCES:
  - LOG_LEVEL: debug (staging) -> warn (production) [OK: production-only rule]
  - DB_POOL_SIZE: 5 (staging) -> 50 (production) [OK: expected scaling]

POLICY VIOLATIONS:
  - API_RATE_LIMIT: 50 (production) < 100 minimum [VIOLATION]
```

### 3. Security Analysis
```
$ env-sentinel security-scan production
Security Scan: production environment

HIGH RISK:
  - AWS_SECRET_ACCESS_KEY: Exposed in plain text (use secrets manager)
  - DATABASE_URL: Contains password in connection string

MEDIUM RISK:
  - DEBUG_MODE: Enabled in production
  - LOG_LEVEL: Set to 'debug' (exposes sensitive data)

RECOMMENDATIONS:
  1. Move AWS credentials to secrets manager
  2. Use IAM roles instead of access keys
  3. Disable debug mode in production
```

### 4. Compliance Reports
```
$ env-sentinel compliance --framework soc2 --output report.pdf
SOC2 Compliance Report: production

CONTROL CC6.1 - Logical Access Controls
  [PASS] All database connections use encrypted transport
  [PASS] API keys rotated within 90 days
  [FAIL] Service account passwords exceed 180 days

CONTROL CC7.2 - Change Management
  [PASS] Configuration changes logged with timestamps
  [PASS] All changes traceable to authorized personnel
```

### 5. CI/CD Integration
```yaml
# GitHub Actions example
- name: Validate Configuration
  run: |
    env-sentinel validate \
      --policy policies.json \
      --env production \
      --fail-on-warning \
      --ci

- name: Check for Drift
  run: |
    env-sentinel drift staging production \
      --fail-on-drift \
      --ignore-expected-differences expected-drift.json
```

---

## Competitive Differentiation

| Competitor | EnvSentinel Advantage |
|------------|----------------------|
| HashiCorp Vault | Focused on validation/audit, not secrets storage |
| Doppler | Open source core, compliance frameworks built-in |
| dotenvx | Enterprise features, drift detection, audit trails |
| Custom scripts | Standardized policies, compliance reports, maintainable |
| Manual checklists | Automated, scalable, consistent |
