cmake_minimum_required(VERSION 3.12)

project(hw2 LANGUAGES CXX)

add_subdirectory(lib)
add_subdirectory(bin)

enable_testing()
add_subdirectory(tests)
