cmake_minimum_required(VERSION 3.26)
project(chipmunk)

set(CMAKE_CXX_STANDARD 23)

add_executable(chipmunk main.cpp
        src/Emulator.tpp
        src/Emulator.cpp
        src/Memory.h
)
