#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return len of linked list
 * @h: linked list
 *
 * Return: i, num of elements in list
 */
size_t listint_len(const listint_t *h)
{
	listint_t current;
	int i = 0;

	current = *h;
	while (current.n)
	{
		i++;
		if (current.next == NULL)
			break;
		current = *current.next;
	}
	return (i);
}
