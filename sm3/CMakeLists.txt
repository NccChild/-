cmake_minimum_required(VERSION 3.23)
project(sm3 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(sm3
        demo.c
        endian.h
        error.h
        sm3.c
        sm3.h)
