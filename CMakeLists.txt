cmake_minimum_required(VERSION 3.26)
project(chipmunk)

set(CMAKE_CXX_STANDARD 23)

add_executable(chipmunk src/main.cpp
        src/CPU.tpp
        src/CPU.cpp
        src/Memory.tpp
        src/Display.tpp
        src/Display.cpp
        src/Memory.cpp
        src/Opcodes.cpp
)
