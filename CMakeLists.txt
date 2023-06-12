#define the minimum cmake version
cmake_minimum_required(VERSION 3.16)

#define the project name
project(developer VERSION 1.0 LANGUAGES CXX)

#define the c standard version
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#add some compile options
add_compile_options(-Wall -Wextra -pedantic) 

#add a library for your functions
add_library(lib1 STATIC src/developer.cpp)

#add the includes to the library
target_include_directories(lib1 PUBLIC include)

#add an executable and assign files to it
add_executable(exec_main src/main.cpp)

#add the include directories
target_include_directories(exec_main PRIVATE include)

#link your library
target_link_libraries(exec_main PRIVATE lib1)

#enable the testing
enable_testing()

#check if we have gtest
find_package(GTest REQUIRED)

#include the gtest CMake stuff
include(GoogleTest)

#create a test executable
add_executable(dev_test test/test.cpp)

#link the gtest libraries
target_link_libraries(dev_test PRIVATE GTest::GTest GTest::Main)

#link the library we want to test
target_link_libraries(dev_test PRIVATE lib1)

#add the include directories
target_include_directories(dev_test PUBLIC include)

#discover and add tests to the test list
gtest_discover_tests(dev_test)

