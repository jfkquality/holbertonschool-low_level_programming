#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - get bit at index
 * @n: decimal number to convert
 * @index: index
 *
 * Return: nothing
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int lsb;

	if (index < 64)
	{
		lsb = (n >> index) & 1;
		return (lsb);
	}
	return (-1);
}
