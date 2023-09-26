#ifndef SORT_H
#define SORT_H

#include <stdbool.h>
#include <stddef.h>

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap(int* a, int* b);

#endif