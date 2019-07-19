#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - create array filled with zero
 * @size: size of elements
 * @nmemb: # of elements in (ie, size of) array
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i = 0;
	char *p = malloc(size * nmemb);


	if (!size || !nmemb)
		return (NULL);


	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = '0';

	return (p);

}
