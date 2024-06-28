cmake_minimum_required(VERSION 3.10)
project(timp)

set(CMAKE_CXX_STANDARD 11)

add_executable(main src/main.cpp)

enable_testing()
add_executable(test_foo tests/test_foo.cpp)
target_link_libraries(test_foo gtest gtest_main)
add_test(NAME test_foo COMMAND test_foo)
