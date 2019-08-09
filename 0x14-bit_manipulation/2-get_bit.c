#include <stdio.h>
#include "holberton.h"

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
