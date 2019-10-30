#include "sort.h"


/* void swap(listint_t *current, listint_t *prev, listint_t *head) */
/* { */
	/* listint_t *temp = current; */
	/* printf("in swap"); */



	/* current->prev->next = current->next; */
	/* current->next->prev = current->prev; */
	/* current->next->next = current; */
	/* current->next = temp->next->next; */
	/* current->prev = temp->next; */
/* } */

/**
 * insertion_sort_list - insertion sort on dlink_list
 * @list: list to sort
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	/* Advance curr node (node.n) through list */
	/* If node.n (curr) > node.next.n => swap */
	/* i.e. move current past next; but first (in relation to curr): */
	/* change prev-next (curr-prev-next) to next (curr-next);*/
	/* change next-prev (curr-next-prev) to prev (curr-prev)*/
	/* change curr-next to next-next (curr-next-next) */
	/* change next-next (curr-next-next) to curr */
	/* If at bottom, curr-next = NULL */
	/* Remember moved node.n (curr). */
	/* */
	/* If curr was moved: */
	/* Check if node.prev.n < node.prev.prev.n. Go up the list until it is, */
	/* i.e. node.prev.prev.n < node.prev.n.  */
	/* If need to swap: move to prev & repeat above swap */
	/* If at top, node-prev = NULL */
	/* */
	/* Go back to curr (original node.n). */
	/* Go to node.next */
	/* Rinse and repeat */

	listint_t *current = *list; /* i.e. "left" */
	/* listint_t *head = *list; */
	/* listint_t *temp /\* = current *\/; */
	listint_t *next = current->next; /* i.e. "right" */
	listint_t *prev = current->prev;
	int changed = 0;

	/* const int val = *list->n; */

	if (!next)
		return;

	while (current->next)
	{
		changed = 0;
		next = current->next; /* i.e. "right" */
		prev = current->prev;
		while (prev && prev->n > current->n)
		{
			printf("interating\n");
			prev = prev->prev;
			changed++;
		}
		if (changed)
		{
			/* swap(current, prev); */
			/* https://vparticles.com/data%20stuctures/doubly-linked-lists/ */
			if ( prev )
				prev->next = next;
			else
				*list = next;

			if ( next->next )
				next->next->prev = current;

			current->next  = next->next;
			next->prev = current->prev;
			next->next = current;
			current->prev = next;
		}
		current = current->next;
	}
}



/* 		while (current->prev->n > current->n) /\*interate thru until not *\/ */
/* 		{ */
/* 			current = current->next; */
/* 		} */
/* 		temp = current; */

/* 		if (change) */
/* 		{ */
/* 			while (current->prev) */
/* 			{ */

/* 				while (current->prev->n < current->prev->prev->n) */
/* 				{ */
/* 					printf("swap prev w prev-prev"); */
/* 					swap(current->prev->prev); */
/* 					current = current->prev; */
/* 				} */
/* 				current=current->prev; */
/* 			} */
/* 		change = 0; */
/* 		/\* current = temp; *\/ */
/* 		} */
/* 		current = temp->next; */
/* 	} */
/* } */
