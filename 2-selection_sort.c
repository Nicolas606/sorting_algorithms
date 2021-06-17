#include "sort.h"

/**
 * selection_sort - Sort a doubly linked list of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: The array to sort
 * @size: The size of the array
 * Return: Don´t return
 */

void selection_sort(int *array, size_t size)
{
	int copy;
	size_t i, j, change;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		change = i;
		for(j = i + 1; j < size; j++)
			if (array[j] > array[change])
				change = j;
		if (change != i)
		{
			copy = array[i];
			array[i] = array[change];
			array[change] = copy;
			print_array(array, size);
		}
	}
}

