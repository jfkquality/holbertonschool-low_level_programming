#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - check malloc
 * @b: num
 * Return: pointer to array
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = (malloc(b));
	if (p == NULL)
		exit(98);

	return (p);
}
