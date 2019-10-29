#include "sort.h"

/**
 * insertion_sort_list - insertion sort on dlink_list
 * @list: list to sort
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	/* If node.n > node.next.n => swap */
	/* i.e. */
	/* Continue until node.n < node.next.n. Remember this node. */
	/* Check if node.prev.n is correct. Go up the list until it is, */
	/* i.e. node.prev.prev.n < node.prev.n.  */
	/* Go back to node.n. */
	/* Go to node.next */
	/* Rinse and repeat */

	int n = 0;
	listint_t *current = *list;
	listint_t *temp, *ptr;

	if (current->next == NULL)
		return;

	current = current->next;

	while (current)
	{
		n = 0;
		ptr = current;
		temp = current->prev;
		current = current->next;

		while (!temp && temp->n > ptr->n) /* swap curr/next */
		{
			n++;
			temp = temp->prev;
		}
		if (n) /* i.e. current has moved */
		{
			ptr->prev->next = ptr->next;

			if (ptr->next)
				ptr->next->prev = ptr->prev;

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
		}
	}
}
