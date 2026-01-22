cmake_minimum_required(VERSION 3.10)
project(euler_cpp)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Your source files
set(SOURCES
        src/problem_1.cpp
)

# Test executable
add_executable(test_runner
        ${SOURCES}
        tests/test_problem_1.cpp
)