#ifndef SORTS_PROJECT_FUNCTIONS_H
#define SORTS_PROJECT_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

//функция сортировки
typedef struct SortFunc {
    void (*sort )(int *a, size_t n);                      //указатель на функцию
                                                          //сортировки
    char name[64];                                        //имя сортировки,
                                                          //используемое при выводе
} SortFunc;

//функция генерации
typedef struct GeneratingFunc {
    void (*generate )(int *a, size_t n);                  //указатель на функцию
                                                          //генерации последоват.
    char name[64];                                        //имя генератора,
                                                          //используемое при выводе
} GeneratingFunc;

#endif
