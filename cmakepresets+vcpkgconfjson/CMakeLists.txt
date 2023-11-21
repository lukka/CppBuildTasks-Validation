cmake_minimum_required(VERSION 3.14)

project(example CXX)

add_executable(example main.cpp)

find_package(fmt REQUIRED)

target_link_libraries(example
  PRIVATE
  fmt::fmt)
