# cmake_minimum_required(VERSION <specify CMake version here>)
project(week3example1)

set(CMAKE_CXX_STANDARD 14)

add_executable(week3example1 main.cpp Account.cpp Account.h Accounttest.cpp)