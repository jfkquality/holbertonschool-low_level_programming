#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - Free mem allocated to 2D array.
 * @grid: 2D array
 * @height: height (rows)
 * Return: pointer to array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
