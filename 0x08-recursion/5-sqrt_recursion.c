#include "holberton.h"
#include <stdio.h>

/**
 * factor - find sqrt factors
 * @sq: square numb
 * @f: factor
 *
 * Return: result
 */
int factor(int sq, int f)
{
	if (f * f > sq)
		return (-1);
	if (f * f < sq)
	{
		return (factor(sq, f + 1));
	}
	return (f);
}

/**
 * _sqrt_recursion - find sqrt
 * @n: numb
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	int n1 = n;

	return (factor(n1, 1));
}


