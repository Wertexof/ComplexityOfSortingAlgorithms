cmake_minimum_required(VERSION 3.21)
project(sorts_project C)

set(CMAKE_C_STANDARD 11)

add_executable(sorts_project main.c functions/functions.c functions/functions.h tests/tests.c tests/tests.h)
