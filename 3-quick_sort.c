#include "sort.h"

/**
 * quick_swap - Used to swap two elements
 * @a: First int from array to be swapped
 * @b: Second int from array to be swaped
 * Return: Nothing
 */

void quick_swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

/**
 * partition - Takes last element as pivot, places it at correct position
 * place all smaller than left and all higher than right(of pivot)
 * @arr: Array to be partitioned
 * @low: Low point of sort
 * @high: Hig point of sort
 * @size: Print_array require size
 * Return: Index of new pivot point
 */

int partition(int arr[], int low, int high, size_t size)
{
	int pivot, i, c;

	pivot = arr[high];
	i = (low - 1);

	for (c = low; c <= high - 1; c++)
	{
		if (arr[c] < pivot)
		{
			i++;
			quick_swap(&arr[i], &arr[c]);
			if (arr[i] != arr[c])
			{
				print_array(arr, size);
			}
		}
	}
	quick_swap(&arr[i + 1], &arr[high]);
	if (arr[i + 1] != arr[high])
	{
		print_array(arr, size);
	}
	return (i + 1);
}

/**
 * quickly - Used as the actual swapping method
 * @arr: Array to be sorted
 * @low: Low index point
 * @high: High index point
 * @size: Print_array require size
 * Return: Nothing
 */

void quickly(int arr[], int low, int high, size_t size)
{
	int sortt;

	if (low < high)
	{
		sortt = partition(arr, low, high, size);

		quickly(arr, low, sortt - 1, size);
		quickly(arr, sortt + 1, high, size);
	}
}


/**
 * quick_sort - Used to sort an array via quicksort method
 * @array: Input array to sort
 * @size: Size of th array
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	quickly(array, 0, size - 1, size);/*Send size for printing fuction*/
}
