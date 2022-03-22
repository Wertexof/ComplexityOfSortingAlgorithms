#ifndef SORTS_PROJECT_MERGE_SORT_H
#define SORTS_PROJECT_MERGE_SORT_H

#include <stdio.h>
#include <malloc.h>
#include <memory.h>

void merge(const int *a, const size_t sizeA,
           const int *b, const size_t sizeB,
           int *c) {
    size_t indexA = 0;
    size_t indexB = 0;
    while (indexA < sizeA || indexB < sizeB)
        if (indexB == sizeB || indexA < sizeA && a[indexA] < b[indexB]) {
            c[indexA + indexB] = a[indexA];
            indexA++;
        } else {
            c[indexA + indexB] = b[indexB];
            indexB++;
        }
}

void _mergeSort(int *a, int left, int right, int *buf);

void mergeSort(int *a, const size_t n);

#endif
