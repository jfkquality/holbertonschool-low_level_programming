#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add node to beggining of  linked list
 * @head: linked list
 * @n: integer to add
 *
 * Return: address of new element in list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->n = n;
	printf("new->n after 1st assigned. %d\n", new->n);
	new->next = *head;
	*head = new;

	return (new);
}
