#include "holberton.h"

/**
 * _puts - print every other character of  a string
 * @s: input string pointer
 * Return: void
 */
void _puts(char *s)
{
	char *s2 = s;

	while (*s2 != '\0')
	{
		_putchar(*s2);
		s2 += 2;
	}
	_putchar('\n');
}
