#include "sort.h"
/**
 * swap - function to swap array positions
 * @a: first array
 * @b: second array
 * Return:void
 */
void swap(int* a, int* b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}



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

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        swapped = false;
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                print_array(array, size);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}