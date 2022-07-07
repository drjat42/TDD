cmake_minimum_required(VERSION 3.22)
project(TDD)

set(CMAKE_CXX_STANDARD 17)

include_directories(src test)
add_executable(TDD src/main.cpp test/test.cpp src/constant.h)
