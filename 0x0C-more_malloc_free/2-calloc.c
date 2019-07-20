#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - create array filled with zeros
 * @size: size of elements
 * @nmemb: # of elements in (ie, size of) array
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i = 0;
	char *p;

	if (!size || !nmemb)
		return (NULL);

	p = malloc(size * (nmemb + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		p[i] = 0;
	p[i] = '\0';

	printf("malloc (i) %d\n", i);

	/* while (*p != '\0') { */
	/*   printf("%d ", *p); */
	/*   p++; } */
	/* printf("\n"); */

	return (p);
}
