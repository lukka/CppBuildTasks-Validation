# CMakeLists.txt
cmake_minimum_required(VERSION 3.0)
project(test)
add_executable(main)
target_sources(main PRIVATE test.err.cpp test.fatalerr.cpp)
