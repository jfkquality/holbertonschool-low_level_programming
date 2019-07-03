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
	int i = 0;

	while (*s2 != '\0')
	{
		s2++;
		i++;
	}

	while (s1 <= s2)
	{
		_putchar(*(s1));
		s1 += 2;
	}
	_putchar('\n');
}
