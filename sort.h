#ifndef SORT_H
#define SORT_H

#include <stdbool.h>
#include <stddef.h>

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap(int* a, int* b);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap(listint_t **h, listint_t **n1, listint_t *n2);

#endif