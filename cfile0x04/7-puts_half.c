#include "holberton.h"
#include <stdio.h>

/**
* puts_half - print the 2nd half of a string
 * @s: input string pointer
 * Return: void
 */
void puts_half(char *s)
{
	char *s1 = s;
	char *s2 = s;
	int i, h = 0;

	while (*s2 != '\0')
	{
		s2++;
		i++;
	}
	h = (s2 - s1);
	if (h % 2 != 0)
	{
		h = (h - 1) / 2;
		s1 += h + 1;
	}
	else
	{
		h /= 2;
		s1 += h;
	}
	while (h > 0)
	{
		_putchar(*s1);
		s1++;
		h--;
	}
	_putchar('\n');
}
