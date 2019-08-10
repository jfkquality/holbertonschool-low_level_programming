#include "holberton.h"
#include <stdio.h>

/**
 * print_binary2 - print binary from decimal without / or %
 * @n: decimal number to convert
 *
 * Return: nothing
 */
void print_binary2(unsigned long int n)
{
	if (n != 0)
	{
		print_binary2(n >> 1);
		_putchar((n & 1) + '0');
	}
}

/**
 * print_binary - print binary from decimal without / or %
 * @n: decimal number to convert
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{

	if (n == 0)
		_putchar('0');
	else
		print_binary2(n);
}
