cmake_minimum_required(VERSION 3.0)
project(cxxCleanBuildExamples CXX)

set(CMAKE_BUILD_TYPE "Debug")
include(${CMAKE_SOURCE_DIR}/cmake/CodeCoverage.cmake)
APPEND_COVERAGE_COMPILER_FLAGS()

add_subdirectory(treasureV1)
add_subdirectory(treasureV2)
add_subdirectory(middleManA)
add_subdirectory(middleManB)
add_subdirectory(client)
add_subdirectory(tests)
