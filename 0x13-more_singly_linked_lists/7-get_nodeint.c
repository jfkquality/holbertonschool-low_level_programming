#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *  get_nodeint_at_index - return node # index
 * @head: double point. ???
 * @index: node value to return
 *
 * Return: pointer to new list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* listint_t *new; */
	listint_t *current;
	unsigned int len = 0;

	if (head) /* Then find the last node */
	{
		current = head;
		while (current)
		{
			if (index == len)
				return (current);
			len++;
			current = current->next;
		}
	}

	return (NULL);
}
