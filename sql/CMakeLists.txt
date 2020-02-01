cmake_minimum_required(VERSION 2.8.12)
project(dani_sql CXX)

add_definitions("-std=c++17")

find_path(ANTLR_INCLUDE_DIR NAMES antlr4-runtime.h)

file(GLOB GRAMMAR_HEADERS include/*.h)
file(GLOB GRAMMAR_SOURCES src/*.cpp)

add_library(dani_sql
    ${GRAMMAR_HEADERS}
    ${GRAMMAR_SOURCES})

target_include_directories(dani_sql 
    PUBLIC include ${ANTLR_INCLUDE_DIR})

