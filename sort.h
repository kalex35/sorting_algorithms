#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * enum bool - Enumeration of Boolean values
 * @false: Equals 0
 * @true: Equals 1
 */

typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_a - Doubly Linked list node
 *
 * @n: Integor stored in the node
 * @prev: pointer to the previous element of the list
 * @next: Pointer to the next element of teh list
 */

typedef struct listint_a
{
	const int n;
	struct listint_a *prev;
	struct listint_a *next;
} listint_t;

/* Printing helper function */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting algorithms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoarse(int *array, size_t size);

#endif /* SORT_H */
