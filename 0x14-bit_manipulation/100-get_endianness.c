#include <stdio.h>
#include "holberton.h"

/**
 * get_endianness - get endianness of my machine (or vagrant?)
 *
 * Return: 1 or 0
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
