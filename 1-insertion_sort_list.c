#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous;
	
	current = (*list)->next;
	previous = (*list)->prev;

	while (current < previous && current != NULL)
	{
		
		previous = current->prev;

		while (current < previous)
		{
			previous->prev = previous->prev->next;
		}

		current->prev = previous->prev->next;
		current->next = previous->prev;
		previous->next = previous->next->prev;
	}
}
