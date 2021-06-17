#include "sort.h"

/**
 * insertion_sort_list - Sort a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: The dlist to be sorted
 * Return: Don´t return
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *modified = NULL, *runs = NULL;

	if (list == NULL || *list == NULL)
		return;

	runs = (*list)->next;

	while(runs)
	{
		modified = runs;
		while (modified != NULL)
		{
			if (modified->prev->n > modified->n)
			{
				if (modified->prev->prev != NULL)
					modified->prev->prev->next = modified;
				modified->prev->next = modified->next;
				modified->next = modified->prev;
				modified->prev = modified->next->prev;
				modified->next->prev = modified;
				if (modified->next->next != NULL)
					modified->next->next->prev = modified->next;
				if (modified->prev == NULL)
				{
					*list = modified;
					print_list(*list);
					break;
				}
				print_list(*list);
			}
			else
				break;
			}
		runs = runs->next;
		}
}

