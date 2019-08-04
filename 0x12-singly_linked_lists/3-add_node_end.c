#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Get the length of a string
 *
 * @s: string parament
 *
 * Return: c.
 */
int _strlen(const char *s)
{
	int c = 0;
	const char *s2;

	s2 = s;

	while (*s2 != '\0')
	{
		s2++;
		c++;
	}

	return (c);
}

/**
 * add_node_end - add nodes to end of list
 * @head: double point. ???
 * @str: new string
 *
 * Return: pointer to new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	/* int i = 0; */
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
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
