note
	description: "Simple JSON-based configuration file management"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_CONFIG

inherit
	SIMPLE_JSON_CONSTANTS
		export
			{NONE} all
		end

create
	make,
	make_with_file

feature {NONE} -- Initialization

	make
			-- Create empty configuration.
		do
			create data.make
			file_path := ""
			is_modified := False
			create env
		end

	make_with_file (a_file_path: STRING)
			-- Create configuration from file.
		require
			path_not_empty: not a_file_path.is_empty
		do
			make
			file_path := a_file_path
			load
		end

feature -- Access

	file_path: STRING
			-- Path to configuration file

	is_modified: BOOLEAN
			-- Has configuration been modified since last save?

	has_key (a_key: STRING): BOOLEAN
			-- Does configuration have `a_key'?
			-- Supports dot notation: "database.host"
		require
			key_not_empty: not a_key.is_empty
		do
			Result := get_value_at_path (a_key) /= Void
		end

feature -- String access

	string_value (a_key: STRING): detachable STRING
			-- Get string value for `a_key'.
			-- Supports dot notation: "database.host"
		require
			key_not_empty: not a_key.is_empty
		local
			l_val: detachable SIMPLE_JSON_VALUE
		do
			l_val := get_value_at_path (a_key)
			if attached l_val as v and then v.is_string then
				Result := v.as_string_32.to_string_8
			end
		end

	string_value_or_default (a_key, a_default: STRING): STRING
			-- Get string value for `a_key', or `a_default' if not found.
		require
			key_not_empty: not a_key.is_empty
		do
			if attached string_value (a_key) as l_val then
				Result := l_val
			else
				Result := a_default
			end
		end

	string_value_or_env (a_key, a_env_var: STRING): detachable STRING
			-- Get string value for `a_key', or environment variable `a_env_var'.
		require
			key_not_empty: not a_key.is_empty
			env_var_not_empty: not a_env_var.is_empty
		local
			l_env_val: detachable STRING_32
		do
			Result := string_value (a_key)
			if Result = Void then
				l_env_val := env.item (a_env_var)
				if attached l_env_val as e then
					Result := e.to_string_8
				end
			end
		end

	string_value_or_env_or_default (a_key, a_env_var, a_default: STRING): STRING
			-- Get string value for `a_key', or env var `a_env_var', or `a_default'.
		require
			key_not_empty: not a_key.is_empty
			env_var_not_empty: not a_env_var.is_empty
		do
			if attached string_value_or_env (a_key, a_env_var) as v then
				Result := v
			else
				Result := a_default
			end
		end

feature -- Integer access

	integer_value (a_key: STRING): INTEGER
			-- Get integer value for `a_key' (0 if not found).
			-- Supports dot notation.
		require
			key_not_empty: not a_key.is_empty
		local
			l_val: detachable SIMPLE_JSON_VALUE
		do
			l_val := get_value_at_path (a_key)
			if attached l_val as v and then v.is_number then
				Result := v.as_integer.to_integer_32
			end
		end

	integer_value_or_default (a_key: STRING; a_default: INTEGER): INTEGER
			-- Get integer value for `a_key', or `a_default' if not found.
		require
			key_not_empty: not a_key.is_empty
		do
			if has_key (a_key) then
				Result := integer_value (a_key)
			else
				Result := a_default
			end
		end

	integer_value_or_env (a_key, a_env_var: STRING; a_default: INTEGER): INTEGER
			-- Get integer from config, or parse from env var, or use default.
		require
			key_not_empty: not a_key.is_empty
			env_var_not_empty: not a_env_var.is_empty
		local
			l_env_val: detachable STRING_32
			l_str: STRING
		do
			if has_key (a_key) then
				Result := integer_value (a_key)
			else
				l_env_val := env.item (a_env_var)
				if attached l_env_val as e then
					l_str := e.to_string_8
					if l_str.is_integer then
						Result := l_str.to_integer
					else
						Result := a_default
					end
				else
					Result := a_default
				end
			end
		end

feature -- Boolean access

	boolean_value (a_key: STRING): BOOLEAN
			-- Get boolean value for `a_key' (False if not found).
			-- Supports dot notation.
		require
			key_not_empty: not a_key.is_empty
		local
			l_val: detachable SIMPLE_JSON_VALUE
		do
			l_val := get_value_at_path (a_key)
			if attached l_val as v and then v.is_boolean then
				Result := v.as_boolean
			end
		end

	boolean_value_or_default (a_key: STRING; a_default: BOOLEAN): BOOLEAN
			-- Get boolean value for `a_key', or `a_default' if not found.
		require
			key_not_empty: not a_key.is_empty
		do
			if has_key (a_key) then
				Result := boolean_value (a_key)
			else
				Result := a_default
			end
		end

feature -- Real access

	real_value (a_key: STRING): DOUBLE
			-- Get real value for `a_key' (0.0 if not found).
			-- Supports dot notation.
		require
			key_not_empty: not a_key.is_empty
		local
			l_val: detachable SIMPLE_JSON_VALUE
		do
			l_val := get_value_at_path (a_key)
			if attached l_val as v and then v.is_number then
				Result := v.as_real
			end
		end

	real_value_or_default (a_key: STRING; a_default: DOUBLE): DOUBLE
			-- Get real value for `a_key', or `a_default' if not found.
		require
			key_not_empty: not a_key.is_empty
		do
			if has_key (a_key) then
				Result := real_value (a_key)
			else
				Result := a_default
			end
		end

feature -- Array access

	string_list (a_key: STRING): ARRAYED_LIST [STRING]
			-- Get array of strings for `a_key'.
			-- Supports dot notation.
		require
			key_not_empty: not a_key.is_empty
		local
			l_val: detachable SIMPLE_JSON_VALUE
			l_arr: SIMPLE_JSON_ARRAY
			i: INTEGER
		do
			create Result.make (0)
			l_val := get_value_at_path (a_key)
			if attached l_val as v and then v.is_array then
				l_arr := v.as_array
				from
					i := 1
				until
					i > l_arr.count
				loop
					if attached l_arr.string_item (i) as s then
						Result.extend (s.to_string_8)
					end
					i := i + 1
				end
			end
		end

	integer_list (a_key: STRING): ARRAYED_LIST [INTEGER]
			-- Get array of integers for `a_key'.
			-- Supports dot notation.
		require
			key_not_empty: not a_key.is_empty
		local
			l_val: detachable SIMPLE_JSON_VALUE
			l_arr: SIMPLE_JSON_ARRAY
			i: INTEGER
		do
			create Result.make (0)
			l_val := get_value_at_path (a_key)
			if attached l_val as v and then v.is_array then
				l_arr := v.as_array
				from
					i := 1
				until
					i > l_arr.count
				loop
					if l_arr.item (i).is_number then
						Result.extend (l_arr.integer_item (i).to_integer_32)
					end
					i := i + 1
				end
			end
		end

	real_list (a_key: STRING): ARRAYED_LIST [DOUBLE]
			-- Get array of reals for `a_key'.
			-- Supports dot notation.
		require
			key_not_empty: not a_key.is_empty
		local
			l_val: detachable SIMPLE_JSON_VALUE
			l_arr: SIMPLE_JSON_ARRAY
			i: INTEGER
		do
			create Result.make (0)
			l_val := get_value_at_path (a_key)
			if attached l_val as v and then v.is_array then
				l_arr := v.as_array
				from
					i := 1
				until
					i > l_arr.count
				loop
					if l_arr.item (i).is_number then
						Result.extend (l_arr.real_item (i))
					end
					i := i + 1
				end
			end
		end

feature -- Section access

	section (a_key: STRING): detachable SIMPLE_CONFIG
			-- Get nested section for `a_key'.
			-- Supports dot notation.
		require
			key_not_empty: not a_key.is_empty
		local
			l_section: SIMPLE_CONFIG
			l_val: detachable SIMPLE_JSON_VALUE
		do
			l_val := get_value_at_path (a_key)
			if attached l_val as v and then v.is_object then
				create l_section.make
				l_section.set_data (v.as_object)
				Result := l_section
			end
		end

feature -- Element change

	set_string (a_key, a_value: STRING)
			-- Set string value for `a_key'.
			-- Note: Does NOT support dot notation for setting (use sections).
		require
			key_not_empty: not a_key.is_empty
		local
			l_ignore: SIMPLE_JSON_OBJECT
		do
			l_ignore := data.put_string (a_value.to_string_32, a_key.to_string_32)
			is_modified := True
		ensure
			modified: is_modified
		end

	set_integer (a_key: STRING; a_value: INTEGER)
			-- Set integer value for `a_key'.
		require
			key_not_empty: not a_key.is_empty
		local
			l_ignore: SIMPLE_JSON_OBJECT
		do
			l_ignore := data.put_integer (a_value, a_key.to_string_32)
			is_modified := True
		ensure
			modified: is_modified
		end

	set_boolean (a_key: STRING; a_value: BOOLEAN)
			-- Set boolean value for `a_key'.
		require
			key_not_empty: not a_key.is_empty
		local
			l_ignore: SIMPLE_JSON_OBJECT
		do
			l_ignore := data.put_boolean (a_value, a_key.to_string_32)
			is_modified := True
		ensure
			modified: is_modified
		end

	set_real (a_key: STRING; a_value: DOUBLE)
			-- Set real value for `a_key'.
		require
			key_not_empty: not a_key.is_empty
		local
			l_ignore: SIMPLE_JSON_OBJECT
		do
			l_ignore := data.put_real (a_value, a_key.to_string_32)
			is_modified := True
		ensure
			modified: is_modified
		end

	set_section (a_key: STRING; a_section: SIMPLE_CONFIG)
			-- Set nested section for `a_key'.
		require
			key_not_empty: not a_key.is_empty
			section_not_void: a_section /= Void
		local
			l_ignore: SIMPLE_JSON_OBJECT
		do
			l_ignore := data.put_object (a_section.data, a_key.to_string_32)
			is_modified := True
		ensure
			modified: is_modified
		end

	remove (a_key: STRING)
			-- Remove value for `a_key'.
		require
			key_not_empty: not a_key.is_empty
		do
			data.remove (a_key.to_string_32)
			is_modified := True
		ensure
			modified: is_modified
		end

feature -- File operations

	load
			-- Load configuration from file.
		local
			l_json: SIMPLE_JSON
		do
			if not file_path.is_empty then
				create l_json
				if attached l_json.parse_file (file_path.to_string_32) as l_val then
					if attached l_val.as_object as l_obj then
						data := l_obj
						is_modified := False
					end
				end
			end
		end

	merge_file (a_file_path: STRING)
			-- Merge another config file, overriding existing values.
		require
			path_not_empty: not a_file_path.is_empty
		local
			l_json: SIMPLE_JSON
			l_other: detachable SIMPLE_JSON_OBJECT
		do
			create l_json
			if attached l_json.parse_file (a_file_path.to_string_32) as l_val then
				l_other := l_val.as_object
				if attached l_other as other then
					merge_objects (data, other)
					is_modified := True
				end
			end
		end

	save
			-- Save configuration to file.
		require
			has_file_path: not file_path.is_empty
		local
			l_file: PLAIN_TEXT_FILE
		do
			create l_file.make_create_read_write (file_path)
			l_file.put_string (to_json_pretty)
			l_file.close
			is_modified := False
		ensure
			not_modified: not is_modified
		end

	save_to (a_file_path: STRING)
			-- Save configuration to specified file.
		require
			path_not_empty: not a_file_path.is_empty
		local
			l_file: PLAIN_TEXT_FILE
		do
			create l_file.make_create_read_write (a_file_path)
			l_file.put_string (to_json_pretty)
			l_file.close
			file_path := a_file_path
			is_modified := False
		ensure
			path_set: file_path = a_file_path
			not_modified: not is_modified
		end

feature -- Output

	to_json: STRING
			-- Convert configuration to compact JSON string.
		do
			Result := data.json_value.representation
		end

	to_json_pretty: STRING
			-- Convert configuration to formatted JSON string.
		do
			Result := data.to_pretty_json.to_string_8
		end

feature {SIMPLE_CONFIG} -- Implementation

	data: SIMPLE_JSON_OBJECT
			-- Configuration data

	env: EXECUTION_ENVIRONMENT
			-- Environment variable access

	set_data (a_data: SIMPLE_JSON_OBJECT)
			-- Set configuration data.
		do
			data := a_data
		end

feature {NONE} -- Path navigation

	get_value_at_path (a_path: STRING): detachable SIMPLE_JSON_VALUE
			-- Get value at dot-notation path like "database.host".
		local
			l_parts: LIST [STRING]
			l_current: detachable SIMPLE_JSON_OBJECT
			l_val: detachable SIMPLE_JSON_VALUE
			i: INTEGER
		do
			if not a_path.has ('.') then
				-- Simple key, no dot notation
				Result := data.item (a_path.to_string_32)
			else
				-- Navigate dot notation
				l_parts := a_path.split ('.')
				l_current := data
				from
					i := 1
				until
					i > l_parts.count or l_current = Void
				loop
					l_val := l_current.item (l_parts.i_th (i).to_string_32)
					if i = l_parts.count then
						-- Last part - return the value
						Result := l_val
					elseif attached l_val as v and then v.is_object then
						-- Navigate deeper
						l_current := v.as_object
					else
						-- Path doesn't exist
						l_current := Void
					end
					i := i + 1
				end
			end
		end

feature {NONE} -- Merge

	merge_objects (a_target, a_source: SIMPLE_JSON_OBJECT)
			-- Merge `a_source' into `a_target', overriding values.
		local
			l_ignore: SIMPLE_JSON_OBJECT
			l_key: STRING_32
			l_keys: ARRAY [STRING_32]
			i: INTEGER
		do
			l_keys := a_source.keys
			from
				i := l_keys.lower
			until
				i > l_keys.upper
			loop
				l_key := l_keys.item (i)
				if attached a_source.item (l_key) as v then
					l_ignore := a_target.put_value (v, l_key)
				end
				i := i + 1
			end
		end

note
	copyright: "Copyright (c) 2024-2025, Larry Rix"
	license: "MIT License"

end
