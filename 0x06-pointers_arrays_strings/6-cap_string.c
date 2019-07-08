#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalize all words of a string
 * @str: passed array as pointer
 * Return: string
 */
char *cap_string(char *str)
{
	char *s1 = str;

	while (*s1 != '\0')
	{
		if (*s1 >= 'a' && *s1 <= 'z')
			*s1 = *s1 - 32;
		s1++;
	}
	return (str);
}
