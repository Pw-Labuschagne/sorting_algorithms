#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	int temp;
	int *ptr_a = array;
	size_t j, i;

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

