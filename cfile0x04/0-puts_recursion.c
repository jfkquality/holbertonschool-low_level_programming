#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: string pointer parameter
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	char *s1 = s;

	if (*s1 == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s1);
		s1++;
		_puts_recursion(s1);
	}
}
