#include <stdio.h>
#include "lists.h"

/**
 * print_list - print linked list
 * @h: the linked list
 *
 * Return: counter
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *current;
	const list_t *next;

	current = h;
	next = current->next;

	while (current->next)
	{
		if (current->str)
			(printf("[%u] %s\n", current->len, current->str));
		else
			(printf("[%d] %p\n", 0, current->str));

		i++;
		current = next;
	}
	if (current->str)
		(printf("[%u] %s\n", current->len, current->str));
	else
		(printf("[%u] %p\n", current->len, current->str));

	i++;
	return (i);
}
