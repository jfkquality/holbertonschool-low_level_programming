#include "sort.h"

/**
 * insertion_sort_list - insertion sort on dlink_list
 * @list: list to sort
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	/* Iterate curr node (node.n) through list */
	/* until node.n (curr) > node.next.n => swap */
	/* i.e. move current past next; but first (in relation to curr): */
	/* change prev-next (curr-prev-next) to next (curr-next);*/
	/* change next-prev (curr-next-prev) to prev (curr-prev)*/
	/* change curr-next to next-next (curr-next-next) */
	/* change next-next (curr-next-next) to curr */
	/* If at bottom, curr-next = NULL */
	/* Remember moved node.n (curr). */

	listint_t *current = *list; /* i.e. "left" */
	listint_t *ptr /* = *list */;
	listint_t *temp /* = current */;
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
			/* printf("interating\n"); */
			temp = temp->prev;
			changed++;
		}
		if (changed)
		{
			/* swap(current, prev); */
			ptr->prev->next = ptr->next;
			if (ptr->next )
			{
				ptr->next->prev = ptr->prev;
				/* print_list(*list); */
			}
			if (!temp)
			{
				temp = *list;
				ptr->prev = NULL;
				ptr->next = temp;
				ptr->next->prev = ptr;
				*list = ptr;
				print_list(*list);
			}
			else
			{
				temp = temp->next;
				temp->prev->next = ptr;
				ptr->prev = temp->prev;
				temp->prev = ptr;
				ptr->next = temp;
				print_list(*list);
			}
			/* print_list(*list); */
		}
		/* print_list(*list); */
	}
	print_list(*list);
}
