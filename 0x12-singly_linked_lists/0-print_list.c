#include <stdio.h>
#include "lists.h"

/**
 * print_list - print linked list elements
 * @h: the linked list
 *
 * Return: counter
 */

size_t print_list(const list_t *h)
{

	int i = 0;
	const list_t *current;

	current = h;

	while (current)
	{
		i++;
                if (current->str)
		  (printf("[%u] %s\n", current->len, current->str));
                else
		  (printf("[%d] %p\n", 0, current->str));

		current = current->next;
	}

	return (i);
}
