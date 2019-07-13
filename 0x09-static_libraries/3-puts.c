#include "holberton.h"

/**
 * _puts - output a string
 * @w: input string pointer
 * Return: void
 */
void _puts(char *w)
{
	char *s = w;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
