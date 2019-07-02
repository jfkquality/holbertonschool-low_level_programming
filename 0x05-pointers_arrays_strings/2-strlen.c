#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Get the length of a string
 * @c: counter
 * @s: string.
 *
 * Return: c.
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}
