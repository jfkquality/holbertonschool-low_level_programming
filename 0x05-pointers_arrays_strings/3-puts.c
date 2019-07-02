#include "holberton.h"

/**
 * _puts - output a string
 * @w: input string pointer
 * Return: void
 */
void _puts(char *w)
{
	int i = 0;

	while (w[i] != '\0')
	{
		_putchar(w[i]);
		i++;
	}
	_putchar('\n');
}
