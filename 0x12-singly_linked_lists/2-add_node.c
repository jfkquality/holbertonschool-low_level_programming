#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add nodes to beginning of list
 * @head: double point. ???
 * @str: new string
 *
 * Return: pointer to new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
