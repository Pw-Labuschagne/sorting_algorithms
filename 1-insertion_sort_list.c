#include "sort.h"

/**
 * insertion_sort_list - Used to sort a doubly linked list via 
 * insertion sort method
 * @list: Doubly linked list
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *spot, *current, *last;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	last = *list;

	for (; current; current = current->next)
	{
		last = current;
		while (last && last->prev && last->n < last->prev->n)
		{
			spot = last->prev;
			if (spot->prev)
			{
				spot->prev->next = last;
			}
			else
			{
				*list = last;
			}
			if (last->next)
			{
				last->next->prev  = spot;
			}
			spot->next = last->next;
			last->prev = spot->prev;
			last->next = spot;
			spot->prev = last;
			print_list(*list);
		}
	}
}
