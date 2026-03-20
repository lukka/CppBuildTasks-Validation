# CMakeLists.txt
cmake_minimum_required(VERSION 3.5)
project(test)
add_executable(main)
target_sources(main PRIVATE test.err.cpp test.fatalerr.cpp)
