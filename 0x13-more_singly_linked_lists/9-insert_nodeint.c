#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: double point.
 * @idx: node value to return
 * @n: index
 *
 * Return: pointer to new list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;
	listint_t *current;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->n = n;

	if (*head)
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (*head);
		}

		current = *head;
		/* node = 1; */
		while (current)
		{
			if (node == idx - 1)
			{
				new->next = current->next;
				current->next = new;
				return (new);
			}
			node++;
			current = current->next;
		}
	}

	return (NULL);
}
