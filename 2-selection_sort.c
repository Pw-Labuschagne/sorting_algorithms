#include "sort.h"

/**
 * selection_sort - Used to sort an array via selection sort
 * @array: The given array to sort
 * @size: The size of the array to sort
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, temp = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 2; i++)
	{
		min = i;

		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;

		print_array(array, size);
	}
}
