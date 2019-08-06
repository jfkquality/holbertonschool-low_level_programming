#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - free a list
 * @head: double point. ???
 *
 * Return: pointer to new list
 */
int pop_listint(listint_t **head)
{
	/* listint_t *next; */
	listint_t *current;

	if (!head || !*head)
		return (0);

	current = *head;
	free(*head);
	*head = current->next;
	return (current->n);
}
