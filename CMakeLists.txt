cmake_minimum_required(VERSION 3.1)
project(dani)

add_definitions("-std=c++17")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

add_library(libdani INTERFACE)
target_include_directories(libdani INTERFACE include/)

add_executable(dani src/main.cpp)
target_link_libraries(dani libdani)

# Testing
enable_testing()

macro(add_dani_test name)
    add_executable(test_${name} tests/test_${name}.cpp)
    target_link_libraries(test_${name} libdani CONAN_PKG::gtest)
    add_test(NAME test_${name}
         WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/tests
         COMMAND test_${name})
endmacro()

add_dani_test(lexer)

