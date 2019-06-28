#include <stdio.h>
#include "holberton.h"

/**
 * print_triangle - print a triangle
 * @n: parameter
 * Return: void
 */

void print_triangle(int n)
{
	int i;
	int j;
	int k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j < n - i; j++)
			{
				_putchar('.');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
