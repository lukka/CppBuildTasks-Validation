# CMakeLists.txt
cmake_minimum_required(VERSION 3.5)
project(test)
add_subdirectory(subdir)

add_executable(main)
target_sources(main PRIVATE test.err.cpp)
message(WARNING "This is a warning")

