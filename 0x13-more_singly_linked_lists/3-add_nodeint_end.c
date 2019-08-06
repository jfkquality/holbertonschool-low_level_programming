#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - add nodes to end of list
 * @head: double point. ???
 * @n: new int
 *
 * Return: pointer to new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;
	int len = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->n = n;
	printf("new->n after 1st assigned. %d\n", new->n);
	new->next = NULL;

	if (*head) /* Then find the last node */
	{
		current = (*head);
		while (current->next)
		{
			len++;
			current = current->next;
		}
		current->next = new;
	}
	else
		*head = new;

	return (*head);
}
