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
	if (n > 0)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	/* else */
	/* 	_putchar('0'); */

}
