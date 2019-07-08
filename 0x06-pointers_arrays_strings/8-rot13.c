#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - convert string to rot13 encoding
 * @str: passed array as pointer
 * Return: string
 */
char *rot13(char *str)
{
	/**
	* "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n""
	*/

	char *s1 = str;
	char *c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *c1 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *d = c;
	char *d1 = c1;

	while (*s1 != '\0')
	{
		d = c;
		d1 = c1;
		while (*d != '\0')
		{
			if (*s1 == *d)
			{
				*s1 = *d1;
				break;
			}
			d++;
			d1++;
		}
		s1++;
	}
	return (str);

}
