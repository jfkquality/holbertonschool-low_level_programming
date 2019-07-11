#include "holberton.h"
#include <stdio.h>

/**
 * sqrt_recursion(int n) - find sqrt
 * @n: numb
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	int x1 = x;
	int y1 = y;

	if (y1 < 0)
		return (-1);
	else if (y1 == 0)
		return (1);
	else
		return (x1 * _pow_recursion(x1, y - 1));
}
