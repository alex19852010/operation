cmake_minimum_required(VERSION 3.21)
project(test_cmake)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_cmake src/main.cpp include/operations.h src/operation.cpp)

target_include_directories(test_cmake PUBLIC include)
