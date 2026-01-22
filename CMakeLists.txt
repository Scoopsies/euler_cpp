cmake_minimum_required(VERSION 3.12)
project(euler_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES CONFIGURE_DEPENDS "src/*.cpp")
file(GLOB TEST_SOURCES CONFIGURE_DEPENDS "tests/*.cpp")

add_executable(test_runner ${SOURCES} ${TEST_SOURCES})

target_include_directories(test_runner PRIVATE include)