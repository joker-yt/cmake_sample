# how to use
# > cmake -S . -B build
project(layer-test)
cmake_minimum_required(VERSION 3.22)
message("Root: ${PROJECT_SOURCE_DIR}")
message("Root: ${PROJECT_BINARY_DIR}")
message("Root: ${CMAKE_SOURCE_DIR}")
message("Root: ${CMAKE_CURRENT_SOURCE_DIR}")
add_subdirectory(layer1)
