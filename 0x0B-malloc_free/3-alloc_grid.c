#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Return pointer to grid.
 * @width: width
 * @sheight: height
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{

	int i = 0;
	/* int j = 0; */
	int *p;

	if (!width || !height)
		return (NULL);


	/* printf("l1 and l2 = %d %d\n", l1, l2); */

	p = malloc(width * height * sizeof(int));

	printf ("size of p: %p\n", p);

	if (p == NULL)
		return (NULL);

	for (; i < width * height; i++)
		*(p + i) = 0;

	return (p);

}
