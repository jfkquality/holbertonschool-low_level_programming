#include "holberton.h"

/**
 * puts2 - print every other character of  a string
 * @s: input string pointer
 * Return: void
 */
void puts2(char *s)
{
	char *s1 = s;
	char *s2 = s;
	int i, h = 0;

	while (*s2 != '\0')
	{
		s2++;
		i++;
	}

	h = s2 - s1;
	while (h > 0)
	{
		_putchar(*s1);
		s1 += 2;
		h -= 2;
	}
	_putchar('\n');
}
