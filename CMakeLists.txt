cmake_minimum_required(VERSION 3.19)
project(c_tutorial C)

set(CMAKE_C_STANDARD 99)

add_executable(c_tutorial main.c)
add_executable(test test.c)
add_executable(simple1 ss1_intro/simple1.c)
add_executable(simple2 ss1_intro/simple2.c)
add_executable(simple3 ss1_intro/simple3.c)
add_executable(simple4 ss1_intro/simple4.c)