#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array  - Reverse an array of integers
 * @a: passed array as pointer
 * @n: size of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *s2;
	int *s3;
	int c = 0;
	int d = 0;
	int n1 = 0;

	s2 = a;
	s3 = a;

	n--;
	for (; n > 0 && n1 < n; n--, n1++)
	{
		c = s2[n1];
		d = s3[n];
		s2[n1] = d;
		s3[n] = c;
	}
}
