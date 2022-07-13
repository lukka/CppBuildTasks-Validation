# CMakeLists.txt

# Ensure to pick up the default triplet from the environment if any. This helps 
# driving the vcpkg triplet in the same way either when starting vcpkg directly,
# or when letting CMake start vcpkg at configure/generate time.
# Note: this logic must happen before PROJECT command.
if(DEFINED ENV{VCPKG_DEFAULT_TRIPLET} AND NOT DEFINED VCPKG_TARGET_TRIPLET)
  set(VCPKG_TARGET_TRIPLET "$ENV{VCPKG_DEFAULT_TRIPLET}" CACHE STRING "The vcpkg triplet")
endif()

cmake_minimum_required(VERSION 3.0)
project(test)

find_package(unofficial-sqlite3 CONFIG REQUIRED)

add_executable(main)
target_sources(main PRIVATE test.cpp)
target_link_libraries(main PRIVATE unofficial::sqlite3::sqlite3)
set_property(TARGET main PROPERTY CXX_STANDARD 20)

