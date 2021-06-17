#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order using the Bubble
 * sort algorithm
 *
 * @array: The array to sort
 * @size: The size of the array
 * Return: Don´t return
 */

void bubble_sort(int *array, size_t size)
{
	size_t change = 1, i;
	int tmp;

	while(change)
	{
		change = 0;
		for (i = 1; i < size; i++)
			if (array[i - 1] > array[i])
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				change = 1;
				print_array(array, size);
			}
	}
}
