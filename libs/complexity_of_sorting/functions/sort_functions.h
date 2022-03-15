#ifndef SORTS_PROJECT_SORT_FUNCTIONS_H
#define SORTS_PROJECT_SORT_FUNCTIONS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "C:/Users/perso/CLionProjects/sorts_project/libs/complexity_of_sorting/sorts/bubble_sort.h"
#include "C:/Users/perso/CLionProjects/sorts_project/libs/algorithms/array/array.h"
#include "C:/Users/perso/CLionProjects/sorts_project/libs/complexity_of_sorting/functions/sort_functions.h"
#include "C:/Users/perso/CLionProjects/sorts_project/libs/complexity_of_sorting/functions/generators.h"
#include "C:/Users/perso/CLionProjects/sorts_project/libs/complexity_of_sorting/sorts/bubble_sort.h"
#include "C:/Users/perso/CLionProjects/sorts_project/libs/complexity_of_sorting/sorts/insertion_sort.h"
#include "C:/Users/perso/CLionProjects/sorts_project/libs/complexity_of_sorting/sorts/selection_sort.h"
#include "C:/Users/perso/CLionProjects/sorts_project/libs/complexity_of_sorting/sorts/shell_sort.h"
#include "C:/Users/perso/CLionProjects/sorts_project/libs/complexity_of_sorting/sorts/comb_sort.h"
#include "C:/Users/perso/CLionProjects/sorts_project/libs/complexity_of_sorting/sorts/radix_sort.h"

typedef struct sortFunc {
    void (*sort)(int *a, size_t n); //указатель на функцию сортировки.
    char name[64];                  //имя сортировки, используемое при выводе.
} sortFunc;

typedef struct generateFunc {
    void (*generate)(int *a, size_t n); //указатель на функцию генерации последовательности.
    char name[64];                      //имя генератора, используемое при выводе.
} generateFunc;

void checkTime(void (*sort)(int *, size_t),
               void (*generate)(int *, size_t),
               size_t size, char *experimentName);

void timeExperiment();

#endif