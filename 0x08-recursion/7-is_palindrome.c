#include "holberton.h"
#include <stdio.h>

/**
 * is_palindrome - determine if word is a palindrome
 * @s: word/string pointer
 * 
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

	l = get_length(s1);



	printf("l is %d\n", l);
	if (l - 1 == 1 || l - 1 == 0)
		return (1);
	if (*(s1) == *(s + l - 1))
	  /* printf("1st %d, last %d\n", *s1, *(s1+l-1)); */
		return (is_palindrome(s1 + 1));
	return (0);

}
