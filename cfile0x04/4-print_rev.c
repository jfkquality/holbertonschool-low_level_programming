#include "holberton.h"
#include <stdio.h>

/**
 * print_rev  - Print string in reverse
 * @s: passed string as pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	char *s2 = s;

	while (*s2 != '\0')
	{
		s2++;
		i++;
	}

	s2--;
	i--;

	while (i >= 0)
	{
		_putchar(*s2);
		s2--;
		i--;
	}
	_putchar('\n');
}
