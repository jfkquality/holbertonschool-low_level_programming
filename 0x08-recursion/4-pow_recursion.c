#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - find x to the power y
 * @x: numb
 * @y:power
 * Return: result
 *
 */

int _pow_recursion(int x, int y)
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
