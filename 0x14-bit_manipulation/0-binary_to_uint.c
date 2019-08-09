#include <stdio.h>
#include "holberton.h"

/**
 * _isdigit - determines if a character is upper or lower case
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	if (c >= '0'  && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * _strlen - Get the length of a string
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

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary number as a string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int len;
	unsigned int result = 0;

	if (!b)
		return (0);

	len = _strlen(b);

	while (i < len)
	{
		if (_isdigit(b[i]) == 0)
			return (0);
		result += ((b[i] - '0') << (len - i - 1));
		i++;
	}
	return (result);
}
