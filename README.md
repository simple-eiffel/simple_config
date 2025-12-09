# SIMPLE_CONFIG

Simple JSON-based configuration file management with dot-notation access and environment variable support.

## Features

- JSON configuration files
- Dot-notation key access (e.g., "database.host")
- Environment variable fallback
- Type-safe value access (string, integer, boolean, real)
- Array and nested section support
- File merging for environment-specific configs

## Installation

Add to your ECF file:

```xml
<library name="simple_config" location="$SIMPLE_CONFIG/simple_config.ecf"/>
```

Set the environment variable:
```
SIMPLE_CONFIG=/path/to/simple_config
```

## Quick Start

```eiffel
local
    config: SIMPLE_CONFIG
do
    create config.make_with_file ("config.json")

    -- Get values with dot notation
    if attached config.string_value ("database.host") as host then
        print ("Host: " + host + "%N")
    end

    -- Get with default
    print ("Port: " + config.integer_value_or_default ("database.port", 5432).out)

    -- Get from config or environment variable
    if attached config.string_value_or_env ("api.key", "API_KEY") as key then
        print ("API Key: " + key + "%N")
    end

    -- Modify and save
    config.set_string ("app.name", "MyApp")
    config.save
end
```

## API Overview

### SIMPLE_CONFIG

| Feature | Description |
|---------|-------------|
| `make_with_file` | Load from JSON file |
| `string_value (key)` | Get string value |
| `integer_value (key)` | Get integer value |
| `boolean_value (key)` | Get boolean value |
| `real_value (key)` | Get real/double value |
| `string_value_or_default` | Get with default |
| `string_value_or_env` | Get from config or env var |
| `string_list (key)` | Get array of strings |
| `section (key)` | Get nested section |
| `set_string/integer/boolean` | Set values |
| `save` | Save to file |
| `merge_file` | Merge another config |

## Documentation

- [API Documentation](https://simple-eiffel.github.io/simple_config/)

## Dependencies

- simple_json

## License

MIT License - see LICENSE file for details.

## Author

Larry Rix
