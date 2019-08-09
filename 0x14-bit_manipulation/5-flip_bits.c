#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - number of bits to change number to the other
 * @n: number 1
 * @m: number 2
 *
 * Return: i, number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int l;

	l = n ^ m;

	while (l != 0)
	{
		if ((l & 1) == 1)
			i++;
		l = l >> 1;
	}
	return (i);
}
