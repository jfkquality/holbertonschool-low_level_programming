#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - set bit of number at index
 * @n: number
 * @index: index
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
