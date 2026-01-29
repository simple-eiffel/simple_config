<p align="center">
  <img src="https://raw.githubusercontent.com/simple-eiffel/.github/main/profile/assets/logo.svg" alt="simple_ library logo" width="400">
</p>

# simple_config

**[Documentation](https://simple-eiffel.github.io/simple_config/)** | **[GitHub](https://github.com/simple-eiffel/simple_config)**

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Eiffel](https://img.shields.io/badge/Eiffel-25.02-blue.svg)](https://www.eiffel.org/)
[![Design by Contract](https://img.shields.io/badge/DbC-enforced-orange.svg)]()

JSON-based configuration management for Eiffel applications.

Part of the [Simple Eiffel](https://github.com/simple-eiffel) ecosystem.

## Status

**Production**

## Overview

SIMPLE_CONFIG provides easy JSON-based configuration with dot-notation access and environment variable fallback. Supports type-safe access, file merging, and modification.

```eiffel
local
    config: SIMPLE_CONFIG
do
    create config.make_with_file ("config.json")
    print (config.string_value ("database.host"))
    print (config.integer_value ("database.port"))

    -- Config value or environment variable fallback
    port := config.integer_value_or_env ("database.port", "DB_PORT", 5432)
end
```

## Features

- **Dot Notation** - Access nested values: "database.host"
- **Environment Fallback** - Config values can fall back to env vars
- **Type-Safe Access** - String, integer, boolean, real, array accessors
- **File Merging** - Merge multiple configs for environment overrides
- **Modification** - Set values and save back to file

## Installation

1. Set environment variable (one-time setup for all simple_* libraries):
```bash
export SIMPLE_EIFFEL=D:\prod
```

2. Add to ECF:
```xml
<library name="simple_config" location="$SIMPLE_EIFFEL/simple_config/simple_config.ecf"/>
```

## Dependencies

- simple_json

## License

MIT License
