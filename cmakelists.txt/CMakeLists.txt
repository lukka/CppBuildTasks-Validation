# CMakeLists.txt
cmake_minimum_required(VERSION 3.0)
project(test)

find_package(sqlite3 CONFIG REQUIRED)

add_executable(main)
target_sources(main PRIVATE test.cpp)
target_link_libraries(main PRIVATE sqlite3)
