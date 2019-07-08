#include "holberton.h"
#include <stdio.h>

int is_separator(char *);

/**
 * cap_string - capitalize all words of a string
 * @str: passed array as pointer
 * Return: string
 */
char *cap_string(char *str)
{
  /**
   * 1. If the first char is a let, capitalize it if it's not;
   * (i.e. if it's between a-z then -32).
   * 2. Continue until separator found.
   * 3. Repeat from step 2 until end of source.
  */
	char *s1 = str;

	while (*s1)
	{
	/**
	 * If it's the first char in str,
	 * or the char before is a separator, cap it.
	 */
		if (s1 == str || is_separator(s1 - 1))
		{
			if (*s1 >= 'a' && *s1 <= 'z')
				*s1 = *s1 - 'a' + 'A';
		}
		s1++;
	}
	return (str);
}
/**
 * is_separator  - find separators in string
 * @c: character pointer to test
 * Return: string
 */
int is_separator(char *c)
{
	char separators[] = "' '\t\n,;.!?\"(){}";
	char *sep2 = separators;

	while (*sep2)
	{
		if (*c == *sep2)
			return (1);
		sep2++;
	}
	return (0);
}
