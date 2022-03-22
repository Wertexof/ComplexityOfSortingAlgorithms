#include "quick_sort.h"

void quickSort(int *a, size_t n) {
    qsort(a, n, sizeof(int), cmp_int);
}