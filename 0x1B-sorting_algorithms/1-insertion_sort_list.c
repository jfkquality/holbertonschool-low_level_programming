#include "sort.h"

/**
 * insertion_sort_list - insertion sort on dlink_list
 * @list: list to sort
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list, *ptr, *temp; /* i.e. "left/list/curr */
	int changed = 0;

	if (!current->next)
		return;
	current = current->next;
	while (current)
	{
		changed = 0;
		ptr = current;
		temp = current->prev;
		current = current->next; /* i.e. "right" */
		while (temp && temp->n > ptr->n)
		{
			temp = temp->prev;
			changed++;
		}
		if (changed)
		{
			ptr->prev->next = ptr->next;
			if (ptr->next )
				ptr->next->prev = ptr->prev;
			if (!temp)
			{
				temp = *list;
				ptr->prev = NULL;
				ptr->next = temp;
				ptr->next->prev = ptr;
				*list = ptr;
			}
			else
			{
				temp = temp->next;
				temp->prev->next = ptr;
				ptr->prev = temp->prev;
				temp->prev = ptr;
				ptr->next = temp;
			}
			print_list(*list);
		}
		print_list(*list);
	}
	print_list(*list);
}
