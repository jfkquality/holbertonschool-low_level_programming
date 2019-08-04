#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - free a list
 * @head: double point. ???
 *
 * Return: pointer to new list
 */
void free_list(list_t *head)
{
	list_t *next;
	list_t *current;

	current = head;
	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
