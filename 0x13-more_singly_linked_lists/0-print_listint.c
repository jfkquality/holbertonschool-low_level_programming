#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print entire linked list
 * @h: linked list
 *
 * Return: i, num of elements in list
 */
size_t print_listint(const listint_t *h)
/* { */
/*vlistint_t current; */
/* int i = 0; */

/* current = *h; */

/* while (current.n) */
/* { */
/* i++; */
/* printf("%d\n", current.n); */
/* if (current.next == NULL) */
/* break; */
/* current = *current.next; */
/* } */
/* return (i); */
/* } */
{
	int i = 0;
	const listint_t *current;

	current = h;

	while (current)
	{
		i++;
		printf("%d\n", current->n);
		current = current->next;
	}

	return (i);
}
