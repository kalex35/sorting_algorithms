#ifndef QUICK_SORT_HOARE_H
#define QUICK_SORT_HOARE_H

#include <stddef.h>

void quick_sort_hoare(int *array, size_t size);
int hoare_partition(int *array, size_t size, int left, int right);
void hoare_sort(int *array, size_t size, int left, int right);

#endif /* QUICK_SORT_HOARE_H */
