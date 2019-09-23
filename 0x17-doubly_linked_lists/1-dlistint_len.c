#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - list count of linked list elements
 * @h: the linked list
 *
 * Return: counter
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *h1;

	h1 = h;

	while (h1)
	{
		i++;
		h1 = h1->next;
	}
	return (i);
}
