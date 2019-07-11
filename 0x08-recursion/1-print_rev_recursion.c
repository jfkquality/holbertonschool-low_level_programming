#include "holberton.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string pointer parameter
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *s1 = s;

	if (*s1 != '\0')
	{
		_print_rev_recursion(s1 + 1);
		_putchar(*s1);
	}
}
