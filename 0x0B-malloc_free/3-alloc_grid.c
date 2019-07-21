#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Return pointer to grid.
 * @width: width
 * @height: height
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{

	int i = 0;
	int j = 0;
	int len = 0;
	int *ptr;
	int **arr;

	if (!width || !height)
		return (NULL);


	/* printf("l1 and l2 = %d %d\n", l1, l2); */

	len = height * sizeof(int *) + (width * height * sizeof(int));
	arr = malloc(len);
	if (arr == NULL)
		return (NULL);

	/* ptr is now pointing to the first element of 2D array */
	ptr = (int *)(arr + height);

	/* printf ("size of p: %p\n", p); */

	/* for loop to point rows pointer to appropriate location in 2D array */
	for (i = 0; i < height; i++)
		arr[i] = (ptr + width * i);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0; /* OR *(*(arr+i)+j) = 0 */
	}
	return (arr);

}
