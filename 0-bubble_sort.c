#include "sort.h"

/**
 * bubble_sort - Bubble sorting of array
 * @array: Array to be sorted
 * @size: Size of the array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	int *ptr_a = array;
	size_t j, i;
	if (size > 2)
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (ptr_a[j] > ptr_a[j + 1])
			{
				temp = ptr_a[j];
				ptr_a[j] = ptr_a[j + 1];
				ptr_a[j + 1] = temp;
				print_array(ptr_a, size);
			}
		}
	}
	}
}

