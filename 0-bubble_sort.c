#include "sort.h"
/**
 * bubble_sort - sorts array
 * @array: array to be sorted
 * @size: size of the array
 * Return:void
 */
void bubble_sort(int *array, size_t size)
{
    unsigned int i, j;
    bool swapped;
    for (i = 0; i < size - 1; i++)
    {
        swapped = false;
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

/**
 * swap - function to swap array positions
 * @a: first array
 * @b: second array
 * Return:void
 */
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}