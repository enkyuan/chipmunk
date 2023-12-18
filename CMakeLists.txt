cmake_minimum_required(VERSION 3.26)
project(chipmunk)

set(CMAKE_CXX_STANDARD 23)

add_executable(chipmunk main.cpp
        Emulator.tpp
        Emulator.cpp)
