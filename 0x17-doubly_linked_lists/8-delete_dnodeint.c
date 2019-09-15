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
	dlistint_t *temp;

	if (*head)
	{
		current = *head;

		if (index == 0)
		{
			*head = current->next;
			free(current);
			return (1);
		}
		node = 0;
		while (current)
		{
			if (node == index - 1)
			{
				temp = current->next;
				current->next = current->next->next;
				free(temp);
				return (1);
			}
			node++;
			current = current->next;
		}
	}
	return (-1);
}
