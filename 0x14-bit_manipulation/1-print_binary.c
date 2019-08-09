#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Get the length of a string
 *
 * @s: string parament
 *
 * Return: c.
 */
int _strlen(const char *s)
{
	int c = 0;
	const char *s2;

	s2 = s;

	while (*s2 != '\0')
	{
		s2++;
		c++;
	}

	return (c);
}

/**
 * print_binary - print decimal to binary
 * @n: decimal number
 *
 * Return: counter 1
 */

void print_binary(unsigned long int n)
{

	if (n)
	{
		print_binary(n / 2);
		_putchar((n % 2) + '0');
	}
}
