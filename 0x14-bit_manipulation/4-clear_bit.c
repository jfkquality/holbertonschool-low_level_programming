#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - clear bit of number at index
 * @n: number
 * @index: index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* int bit; */
	if (index > 64)
		return (-1);

	*n = ~*n;
	*n = *n | (1 << index);
	*n = ~*n;

	return (1);
}
