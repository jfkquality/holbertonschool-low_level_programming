#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _array_range - create array of integers
 * @min: lower bound value
 * @max: upper bound value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc((max - min) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= max - min + 1; i++)
		p[i] = i;
	/* p[i] = '\0'; */

	/* while (*p != '\0') { */
	/*   printf("%d ", *p); */
	/*   p++; } */
	/* printf("\n"); */

	return (p);
}
