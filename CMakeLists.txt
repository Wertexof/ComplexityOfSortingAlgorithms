cmake_minimum_required(VERSION 3.21)
project(sorts_project C)

set(CMAKE_C_STANDARD 11)

add_executable(sorts_project main.c
        libs/algorithms/array/array.c
        libs/algorithms/array/array.h
        libs/complexity_of_sorting/sorts/bubble_sort.c
        libs/complexity_of_sorting/sorts/bubble_sort.h
        libs/complexity_of_sorting/sorts/selection_sort.c
        libs/complexity_of_sorting/sorts/selection_sort.h
        libs/complexity_of_sorting/sorts/insertion_sort.c
        libs/complexity_of_sorting/sorts/insertion_sort.h
        libs/complexity_of_sorting/sorts/shell_sort.c
        libs/complexity_of_sorting/sorts/shell_sort.h
        libs/complexity_of_sorting/sorts/comb_sort.c
        libs/complexity_of_sorting/sorts/comb_sort.h
        libs/complexity_of_sorting/functions/sort_functions.c
        libs/complexity_of_sorting/functions/sort_functions.h
        libs/complexity_of_sorting/functions/generators.c
        libs/complexity_of_sorting/functions/generators.h libs/complexity_of_sorting/sorts/radix_sort.c libs/complexity_of_sorting/sorts/radix_sort.h)

