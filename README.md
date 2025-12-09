# simple_config

Simple JSON-based configuration file management for Eiffel applications.

## Features

- Simple key-value configuration storage
- JSON file format for human-readable configs
- Type-safe getters for STRING, INTEGER, BOOLEAN, REAL
- Default value support for missing keys
- Nested sections for organized configurations
- Load/save to files
- Modification tracking

## Installation

Add to your ECF file:
```xml
<library name="simple_config" location="$SIMPLE_CONFIG\simple_config.ecf"/>
```

## Quick Start

```eiffel
local
    cfg: SIMPLE_CONFIG
do
    -- Load from file
    create cfg.make_with_file ("config.json")

    -- Read values with defaults
    print (cfg.string_value_or_default ("server", "localhost"))
    print (cfg.integer_value_or_default ("port", 8080))
    print (cfg.boolean_value_or_default ("debug", False))

    -- Update values
    cfg.set_string ("server", "192.168.1.100")
    cfg.set_integer ("port", 9000)

    -- Save changes
    cfg.save
end
```

## Dependencies

- base (EiffelStudio base library)
- simple_json (JSON parsing and serialization)

## Documentation

See [docs/index.html](docs/index.html) for full API documentation.

## License

MIT License - Copyright (c) 2024-2025, Larry Rix
