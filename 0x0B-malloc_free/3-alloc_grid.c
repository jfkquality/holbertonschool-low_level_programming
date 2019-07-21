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
	/* int len = 0; */
	/* int *ptr; */
	int **arr;

	if (!width || !height)
		return (NULL);

	/* Below if using one malloc, a pointer, and a double ptr */
	/* len = height * sizeof(int *) + (width * height * sizeof(int)); */

	arr = malloc(height * sizeof(int *)); /* rows */
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr[i]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0; /* OR *(*(arr+i)+j) = 0 */
	}
	return (arr);
}
