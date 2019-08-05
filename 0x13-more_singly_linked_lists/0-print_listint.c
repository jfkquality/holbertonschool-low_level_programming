#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	listint_t current;
	int i = 0;

	current = *h;
	while (current.n)
	{
		i++;
		printf("%d\n", current.n);
		if (current.next == NULL)
			break;
		current = *current.next;
	}
	return (i);
}
