#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: lower bound value
 * @max: upper bound value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int j = 0;
	int *p;

	if (min > max)  /* || min < 0 | max < 0) */
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = min; i < max + 1; i++, j++)
		p[j] = i;

	/* p[i] = '\0'; */

	/* while (*p <= max) { */
	/*   printf("0x%02x ", *p); */
	/*   p++; } */
	/* printf("\n"); */

	return (p);
}
