#include "lists.h"
#include <stdio.h>

/**
 * is_palindrome - determine if word is a palindrome
 * @s: word/string pointer
 *
 * Return: result
 */

int get_length(char *w)
{
	char *w1 = w;
	if (*w1 != '\0')
		return (1 + get_length(w1 + 1));
	return (0);
}

int is_palindrome(char *s)
{
	char *s1 = s;
	int l;
	int i;

	l = get_length(s1) - 1;

	for (i = 0; i < l; i++, l--)
	{
		if (*(s1 + i) == *(s1 + l))
		{
			return (0);
		}
	}
	return (1);
}
