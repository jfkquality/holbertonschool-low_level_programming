#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: the list
 * @index: index
 *
 * Return: pointer to new list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int node;
	dlistint_t *current;
	/* dlistint_t *temp; */

	if (*head)
	{
		current = *head;
		/* printf("current %lu\n", current); */

		if (index == 0)
		{
			*head = current->next;
			/* (*head)->prev = NULL; */
			free(current);
			return (1);
		}

		node = 1;
		while (current)
		{
			if (node == index)
			{
				/* temp = current->next; */
				current->prev->next = current->next;
				current->next->prev = current->prev;
				free(current);
				return (1);
			}
			node++;
			current = current->next;
		}
	}
	return (-1);
}
