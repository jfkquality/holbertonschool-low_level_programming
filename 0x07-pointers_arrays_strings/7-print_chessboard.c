#include "holberton.h"

/**
 * print_chessboard - print checkerboard
 * @a: pointer to string to search
 *
 *
 * Return: pointer to found char or NULL.
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
