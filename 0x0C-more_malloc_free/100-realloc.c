#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _realloc - check malloc
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *p2;
	unsigned int i;

	p = (malloc(new_size));
	if (p == NULL)
		return (NULL);

	p2 = ptr;

	if (new_size == old_size)
		return (ptr);

	if (!new_size && ptr)
		return (NULL);

	if (ptr == NULL)
		/* old_size = new_size; */
		return (p);

	for (i = 0; i < old_size; i++)
		p[i] = p2[i];
	p[i] = '\0';
	free(ptr);


	return (p);
}
