#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add nodes to top of list
 * @head: the list
 * @n: new node value
 *
 * Return: pointer to new list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (0);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	new->prev = *head;

	return (*head);
}
