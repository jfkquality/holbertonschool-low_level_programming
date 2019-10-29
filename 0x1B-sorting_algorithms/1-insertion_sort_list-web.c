#include "sort.h"

/**
 * insertion_sort_list - insertion sort on dlink_list
 * @list: list to sort
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **q)
{
	/* If node.n > node.next.n => swap */
	/* i.e. */
	/* Continue until node.n < node.next.n. Remember this node. */
	/* Check if node.prev.n is correct. Go up the list until it is, */
	/* i.e. node.prev.prev.n < node.prev.n.  */
	/* Go back to node.n. */
	/* Go to node.next */
	/* Rinse and repeat */

	int n;
        listint_t *cur, *ptr, *tmp;
	cur = *q;
	if (cur->next == NULL)
		return;

	cur = cur->next;
	while(cur != NULL)
	{
		n = 0;
		ptr = cur;
		tmp = cur->prev;
		cur = cur->next;
		while (tmp != NULL && tmp->n > ptr->n)
		{
			n++;
			tmp = tmp->prev;
			print_list(*q);
		}
		if (n)
		{
			ptr->prev->next = ptr->next;
			if (ptr->next != NULL)
				ptr->next->prev = ptr->prev;
			if (tmp == NULL)
			{
				tmp = *q;
				ptr->prev = NULL;
				ptr->next = tmp;
				ptr->next->prev = ptr;
				*q = ptr;
				print_list(*q);
			}
			else
			{
				tmp = tmp->next;
				tmp->prev->next = ptr;
				ptr->prev = tmp->prev;
				tmp->prev = ptr;
				ptr->next = tmp;
				print_list(*q);
			}
			print_list(*q);
		}
		print_list(*q);
	}
	print_list(*q);
}
