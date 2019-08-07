#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * printing - printing
 * @head1: list
 *
 * Return: Always 0.
 */

void printing(listint_t *head1)
{
	print_listint(head1);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 5);
	print_listint(head1);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	print_listint(head1);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	print_listint(head1);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	print_listint(head1);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	print_listint(head1);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	print_listint(head1);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	print_listint(head1);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head1, 0);
	printf("-----------------\n");
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	printing(head);
	return (0);
	delete_nodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);
}
