#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - print binary from decimal without / or %
 * @n: decimal number to convert
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{

	unsigned long int mask = 4294967296;
	/* int found_one = 0; */

	while (mask > 0)
	{
		if ((n & mask) == 0) /* && found_one) */
			_putchar('0');
		else
			_putchar('1');
		/* found_one = 1; */
		mask = mask >> 1;
	}
}
