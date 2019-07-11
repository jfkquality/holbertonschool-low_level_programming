#include "holberton.h"
#include <stdio.h>

/**
 * factorial - print factorial of a num
 * @n: int pointer parameter
 *
 * Return: int
 */
int factorial(int n)
{
	int n1 = n;

	if (n1 >  0)
		return (n1 * factorial(n1 - 1));
	else if (n1 == 0)
		return (1);
	else
		return (-1);
}
