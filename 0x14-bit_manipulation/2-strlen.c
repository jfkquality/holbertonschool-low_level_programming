#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Get the length of a string
 *
 * @s: string parament
 *
 * Return: c.
 */
int _strlen(const char *s)
{
	int c = 0;
	const char *s2;

	s2 = s;

	while (*s2 != '\0')
	{
		s2++;
		c++;
	}

	return (c);
}
