#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - free a list
 * @head: double point. ???
 *
 * Return: pointer to new list
 */
void free_listint(listint_t *head)
{
	listint_t *next;
	listint_t *current;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
