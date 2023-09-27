#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - function to sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: array to be sorted.
 * @size: The size of the array.
 *
 * Description: Print array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_idx;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;

		if ((array[i]) != array[min_idx])
		{
			swap_ints(&array[i], &array[min_idx]);
			print_array(array, size);
		}
	}
}
