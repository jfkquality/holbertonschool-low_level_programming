#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagnols
 * @a: pointer to arrays
 * @size: size of arrays
 * Return: void
 */

void print_diagsums(int *a, int size)
{

	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;
	int *a1 = a;

	while (i < size)
	{
		sum1 += *a1;
		a1 = a1 + (size + 1);
		i++;
	}
	a1 = a;
	while (j < size)
	{
		a1 = a1 + (size - 1);
		sum2 += *a1;
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
