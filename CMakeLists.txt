cmake_minimum_required(VERSION 3.24)
project(C C)

set(CMAKE_C_STANDARD 11)

link_libraries(libeasyx.a)

add_executable(C main.c)
