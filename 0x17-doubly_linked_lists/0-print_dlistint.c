#include <stdlib.h>		/*  */
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print linked list
 * @h: the linked list
 *
 * Return: counter
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *h1;

	h1 = h;
	while (h1)
	{
		printf("%d\n", h1->n);
		h1 = h1->next;
		i++;
	}
	return (i);
}


/* This is from 0x13-more_singly_linked_lists #0 */

 /* * print_listint - print entire linked list */
 /* * @h: linked list */
 /* * */
 /* * Return: i, num of elements in list */

/* size_t print_listint(const listint_t *h) */
/* { */
/*         int i = 0; */
/*         const dlistint_t *current; */

/*         current = h; */

/*         while (current) */
/*         { */
/*                 i++; */
/*                 printf("%d\n", current->n); */
/*                 current = current->next; */
/*         } */

/*         return (i); */
/* } */
