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

	listint_t *current = *list;
	listint_t *temp = current;
	listint_t *next = current->next;
	listint_t *prev = current->prev;

	/* const int val = *list->n; */

	if (current->next == NULL)
		return;

	while (current)
	{
		/* temp = current; */
		/* next = current->next; */
		/* prev = current->prev; */

		ptr = current;
		temp = current->prev;
		current = current->next;

		/* while (current->n > current->next->n) /\* swap curr/next *\/ */
		while (!temp && temp->n > ptr->n) /* swap curr/next */
		{
			temp = temp->prev;
		}
			/* printf("in 1st loop\n"); */
			/* temp = current; */
			/* next = current->next; */
			/* prev = current->prev; */

			/* current = current->next; */
			/* current->next = next->next; */
			/* current->prev = next; */

			/* next->next = temp; */
			/* next->prev = temp->prev; */
			/* prev->next = temp->next; */
			/* prev = temp->next; */
			/* next = temp->next->next; */

			/* current->prev->next = current->next; */
			/* current->prev = current->next; */
			/* current->next->prev = temp->prev; */
			/* current->next = current->next->next; */

			/* current->next->next = current; */
			/* current->next->prev = current->prev; */
			/* current->prev->next = current->next; */
			/* current->prev = temp->next; */
			/* current->next = temp->next->next; */

			/* next->next = current; */
			/* current = next->prev; */

			/* printf("print list #1 \n"); */
			/* print_list(*list); */

			/* DON'T MOVE CURRENT WHEN DONE */

			/* current->next->next = current; */
			/* current->next->prev = current->prev; */
			/* current->prev = current->next; */
			/* current->next = temp->next->next; */
		}
		/* printf("print list #2 (%d) \n", current->n); */
		/* print_list(*list); */

		/* if (temp->next != current->next) /\* i.e. current has moved *\/ */
		if (ptr->next != current->next) /* i.e. current has moved */
		{
			ptr->prev->next = ptr->next;
			if (ptr->next)
				ptr->next->prev = ptr->prev;

			if (!temp)
			{
				tmp = *list;
				ptr->prev = NULL;
				ptr->next = tmp;
				ptr->next->prev = ptr;
				*list = ptr;
			}
			else
			{
				temp = temp->next;
				temp->prev->next = ptr;
				ptr->prev = temp->prev;
				tmp->prev = ptr;
				ptr->next = temp;
			}
		}

			/* printf("print list #3 (%d) \n", current->n); */
			/* prev = current->prev; */
			/* next = current->next; */

	/* 		while (prev->n < prev->prev->n) */
	/* 		{ */
	/* 			/\* swap prev and prev->prev *\/ */
	/* 			temp = prev; */
	/* 			prev->prev = temp->prev->prev; */
	/* 			prev->next = temp->prev; /\* fix this? *\/ */
	/* 			prev->prev->next = temp->next; */
	/* 			prev->prev->prev = temp; */
	/* 		} */
	/* 	} */
	/* 	current = current->next; */
	/* } */

}
