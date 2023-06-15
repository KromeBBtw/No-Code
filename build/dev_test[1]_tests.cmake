add_test([=[DeveloperTest.ConstructorTets]=]  /workspaces/No-Code/build/dev_test [==[--gtest_filter=DeveloperTest.ConstructorTets]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[DeveloperTest.ConstructorTets]=]  PROPERTIES WORKING_DIRECTORY /workspaces/No-Code/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  dev_test_TESTS DeveloperTest.ConstructorTets)
