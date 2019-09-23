#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	/* dlistint_t *new; */
	/* dlistint_t hello = {8, NULL, NULL}; */
	size_t n;

	head = NULL; /* &hello; */
	/* new = malloc(sizeof(dlistint_t)); */
	/* if (new == NULL) */
	/* { */
	/* 	dprintf(2, "Error: Can't malloc\n"); */
	/* 	return (EXIT_FAILURE); */
	/* } */
	/* new->n = 9; */
	/* head->prev = new; */
	/* new->next = head; */
	/* new->prev = NULL; */
	/* head = new; */
	add_dnodeint(&head, 0);
        add_dnodeint(&head, 1);
        add_dnodeint(&head, 2);
        add_dnodeint(&head, 3);
        add_dnodeint(&head, 4);
        add_dnodeint(&head, 98);
        add_dnodeint(&head, 402);
        add_dnodeint(&head, 1024);
	n = dlistint_len(head);
	printf("-> %lu elements\n", n);
	/* free(new); */
	return (EXIT_SUCCESS);
}
