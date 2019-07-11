#include "holberton.h"
#include <stdio.h>

/**
 *  _strlen_recursion - print len of str
 * @s: string pointer parameter
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	char *s1 = s;

	if (*s1 != '\0')
	{
		return (1 + _strlen_recursion(s1 + 1));
	}
	return (0);
}
