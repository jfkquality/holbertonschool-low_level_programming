#include "holberton.h"

/**
 * puts2 - print every other character of  a string
 * @s: input string pointer
 * Return: void
 */
void puts2(char *s)
{
	char *s2 = s;

	while (*s2 != '\0')
	{
		_putchar(*s2);
		s2 += 2;
	}
	_putchar('\n');
}
