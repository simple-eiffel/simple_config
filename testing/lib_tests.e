note
	description: "Tests for SIMPLE_CONFIG"
	author: "Larry Rix"
	testing: "covers"

class
	LIB_TESTS

inherit
	TEST_SET_BASE
		redefine
			on_prepare
		end

feature {NONE} -- Setup

	on_prepare
			-- Prepare for tests.
		do
		end

feature -- Tests

	test_empty_config
			-- Test empty configuration.
		local
			cfg: SIMPLE_CONFIG
		do
			create cfg.make
			assert_false ("empty has no keys", cfg.has_key ("test"))
			assert_string_empty ("no file path", cfg.file_path)
			assert_false ("not modified", cfg.is_modified)
		end

	test_string_values
			-- Test string value storage.
		local
			cfg: SIMPLE_CONFIG
		do
			create cfg.make
			cfg.set_string ("name", "Test App")
			assert_true ("has key", cfg.has_key ("name"))
			assert_attached ("value attached", cfg.string_value ("name"))
			if attached cfg.string_value ("name") as v then
				assert_equal ("value correct", "Test App", v)
			end
			assert_true ("is modified", cfg.is_modified)
		end

	test_integer_values
			-- Test integer value storage.
		local
			cfg: SIMPLE_CONFIG
		do
			create cfg.make
			cfg.set_integer ("port", 8080)
			assert_true ("has key", cfg.has_key ("port"))
			assert_integers_equal ("value correct", 8080, cfg.integer_value ("port"))
		end

	test_boolean_values
			-- Test boolean value storage.
		local
			cfg: SIMPLE_CONFIG
		do
			create cfg.make
			cfg.set_boolean ("debug", True)
			assert_true ("has key", cfg.has_key ("debug"))
			assert_true ("value correct", cfg.boolean_value ("debug"))

			cfg.set_boolean ("release", False)
			assert_false ("false value", cfg.boolean_value ("release"))
		end

	test_real_values
			-- Test real value storage.
		local
			cfg: SIMPLE_CONFIG
		do
			create cfg.make
			cfg.set_real ("rate", 3.14159)
			assert_true ("has key", cfg.has_key ("rate"))
			assert_reals_equal ("value correct", 3.14159, cfg.real_value ("rate"), 0.0001)
		end

	test_defaults
			-- Test default value access.
		local
			cfg: SIMPLE_CONFIG
		do
			create cfg.make
			assert_equal ("string default", "default", cfg.string_value_or_default ("missing", "default"))
			assert_integers_equal ("integer default", 42, cfg.integer_value_or_default ("missing", 42))
			assert_true ("boolean default", cfg.boolean_value_or_default ("missing", True))
			assert_reals_equal ("real default", 2.71828, cfg.real_value_or_default ("missing", 2.71828), 0.0001)
		end

	test_sections
			-- Test nested section access.
		local
			cfg, section: SIMPLE_CONFIG
		do
			create cfg.make
			create section.make
			section.set_string ("host", "localhost")
			section.set_integer ("port", 5432)

			cfg.set_section ("database", section)
			assert_true ("has section", cfg.has_key ("database"))

			if attached cfg.section ("database") as db then
				assert_attached ("section host attached", db.string_value ("host"))
				if attached db.string_value ("host") as h then
					assert_equal ("section host", "localhost", h)
				end
				assert_integers_equal ("section port", 5432, db.integer_value ("port"))
			else
				assert_true ("section exists", False)
			end
		end

	test_dot_notation
			-- Test dot notation for nested access.
		local
			cfg, db: SIMPLE_CONFIG
		do
			create cfg.make
			create db.make
			db.set_string ("host", "localhost")
			db.set_integer ("port", 5432)
			cfg.set_section ("database", db)

			assert_true ("has database.host", cfg.has_key ("database.host"))
			assert_attached ("database.host attached", cfg.string_value ("database.host"))
			if attached cfg.string_value ("database.host") as h then
				assert_equal ("database.host value", "localhost", h)
			end
			assert_integers_equal ("database.port value", 5432, cfg.integer_value ("database.port"))

			create cfg.make
			create db.make
			db.set_string ("username", "admin")
			cfg.set_section ("app", db)
			if attached cfg.section ("app") as app then
				create db.make
				db.set_string ("pass", "secret")
				app.set_section ("creds", db)
			end
			if attached cfg.section ("app") as app then
				assert_true ("has creds", app.has_key ("creds"))
				assert_true ("has creds.pass", app.has_key ("creds.pass"))
			end
		end

	test_typed_arrays
			-- Test typed array access.
		local
			cfg: SIMPLE_CONFIG
			l_strings: ARRAYED_LIST [STRING]
			l_ints: ARRAYED_LIST [INTEGER]
		do
			create cfg.make
			l_strings := cfg.string_list ("missing")
			assert_true ("empty string list", l_strings.is_empty)

			l_ints := cfg.integer_list ("missing")
			assert_true ("empty int list", l_ints.is_empty)
		end

	test_environment_fallback
			-- Test environment variable fallback.
		local
			cfg: SIMPLE_CONFIG
		do
			create cfg.make
			if attached cfg.string_value_or_env ("missing_key", "PATH") as p then
				assert_string_not_empty ("PATH from env", p)
			end

			assert_equal ("env fallback default", "fallback",
				cfg.string_value_or_env_or_default ("missing", "NONEXISTENT_VAR_XYZ123", "fallback"))
		end

	test_pretty_print
			-- Test JSON pretty printing.
		local
			cfg: SIMPLE_CONFIG
			l_json: STRING
		do
			create cfg.make
			cfg.set_string ("name", "Test")
			cfg.set_integer ("port", 8080)

			l_json := cfg.to_json_pretty
			assert_string_contains ("has newlines", l_json, "%N")
			assert_string_contains ("has quotes", l_json, "%"name%"")
		end

	test_factory_support
			-- Test factory support features (_type convention).
		local
			cfg, section: SIMPLE_CONFIG
		do
			create cfg.make
			create section.make
			section.set_string ("_type", "database_config")
			section.set_string ("host", "localhost")
			section.set_integer ("port", 5432)
			cfg.set_section ("database", section)

			-- Test has_section_type
			assert_true ("has section type", cfg.has_section_type ("database"))
			assert_false ("no type for missing", cfg.has_section_type ("missing"))

			-- Test section_type
			if attached cfg.section_type ("database") as t then
				assert_equal ("section type correct", "database_config", t)
			else
				assert_true ("section type attached", False)
			end
			assert_void ("no type for top-level", cfg.section_type ("database.host"))

			-- Test type_specification_at
			assert_equal ("type spec", "database_config", cfg.type_specification_at ("database"))
			assert_string_empty ("type spec empty for missing", cfg.type_specification_at ("missing"))
		end

end
