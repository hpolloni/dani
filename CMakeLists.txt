cmake_minimum_required(VERSION 2.8.12)
project(dani)

add_definitions("-std=c++17")

add_subdirectory(sql)
add_subdirectory(tx)

