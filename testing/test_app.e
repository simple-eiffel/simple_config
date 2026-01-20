note
	description: "Test application for SIMPLE_CONFIG"
	author: "Larry Rix"

class
	TEST_APP

create
	make

feature {NONE} -- Initialization

	make
			-- Run the tests.
		do
			create tests
			print ("Running SIMPLE_CONFIG tests...%N%N")

			passed := 0
			failed := 0

			run_test (agent tests.test_empty_config, "test_empty_config")
			run_test (agent tests.test_string_values, "test_string_values")
			run_test (agent tests.test_integer_values, "test_integer_values")
			run_test (agent tests.test_boolean_values, "test_boolean_values")
			run_test (agent tests.test_real_values, "test_real_values")
			run_test (agent tests.test_defaults, "test_defaults")
			run_test (agent tests.test_sections, "test_sections")
			run_test (agent tests.test_dot_notation, "test_dot_notation")
			run_test (agent tests.test_typed_arrays, "test_typed_arrays")
			run_test (agent tests.test_environment_fallback, "test_environment_fallback")
			run_test (agent tests.test_pretty_print, "test_pretty_print")
			run_test (agent tests.test_factory_support, "test_factory_support")

			print ("%N========================%N")
			print ("Results: " + passed.out + " passed, " + failed.out + " failed%N")

			if failed > 0 then
				print ("TESTS FAILED%N")
			else
				print ("ALL TESTS PASSED%N")
			end
		end

feature {NONE} -- Implementation

	tests: LIB_TESTS

	passed: INTEGER
	failed: INTEGER

	run_test (a_test: PROCEDURE; a_name: STRING)
			-- Run a single test and update counters.
		local
			l_retried: BOOLEAN
		do
			if not l_retried then
				a_test.call (Void)
				print ("  PASS: " + a_name + "%N")
				passed := passed + 1
			end
		rescue
			print ("  FAIL: " + a_name + "%N")
			failed := failed + 1
			l_retried := True
			retry
		end

end
