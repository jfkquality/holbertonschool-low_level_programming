#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add nodes to end of list
 * @head: double pointer; the list
 * @n: new value
 *
 * Return: pointer to new list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* size_t i = 0; */
	dlistint_t *new;
	dlistint_t *current;
	dlistint_t **head1 = head;

	/* create new node; assign n to new.n; set only new.next */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (0);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	/* Find end of list. Set current.next, new.prev.*/
	if (!*head1)
		*head1 = new;
	else
	{
		current = *head1;
		while (current->next)
		{
			current = current->next;
		}
		current->next = new;
		new->prev = current;
	}
	return (*head1);
}
