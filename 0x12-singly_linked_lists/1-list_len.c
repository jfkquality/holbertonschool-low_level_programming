#include <stdio.h>
#include "lists.h"

/**
 * list_len - list count of linked list elements
 * @h: the linked list
 *
 * Return: counter
 */

size_t list_len(const list_t *h)
{

	int i = 0;
	const list_t *current;

	current = h;

	while (current)
	{
		i++;
		current = current->next;
	}

	return (i);
}
