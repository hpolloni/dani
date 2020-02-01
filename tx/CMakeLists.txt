cmake_minimum_required(VERSION 2.8.12)
project(dani_tx CXX)

add_definitions("-std=c++17")

file(GLOB TX_HEADERS include/*.h)
file(GLOB TX_SOURCES src/*.cpp)

add_library(dani_tx
    ${TX_HEADERS}
    ${TX_SOURCES})

target_include_directories(dani_tx 
    PUBLIC include)

