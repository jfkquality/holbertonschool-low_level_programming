#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Print n characters of an array
 *
 * @a: pointer to the array
 * @n: n characters to print
 *
 * Return: c.
 */
void print_array(int *a, int n)
{
	int i = 0;
	int *a2 = a;

	while (i < n - 1)
	{
		printf("%d, ", *(a2 + i));
		i++;
	}
	printf("%d\n", *(a2 + i));
}
