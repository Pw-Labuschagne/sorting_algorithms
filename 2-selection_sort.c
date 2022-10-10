#include "sort.h"

/**
 * selection_sort - Used to sort an array via selection sort
 * @array: The given array to sort
 * @size: The size of the array to sort
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, s;

	int min, flag, temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		s = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				s = j;
				flag = 1;
			}
		}

		if (flag == 1)
		{
			temp = array[i];
			array[i] = array[s];
			array[s] = temp;
			print_array(array, size);
		}

		flag = 0;
	}
}
