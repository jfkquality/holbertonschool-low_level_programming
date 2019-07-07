#include "holberton.h"
#include <stdio.h>

/**
 * leet - convert string to leet
 * @str: passed array as pointer
 * Return: string
 */
char *leet(char *str)
{
	/**
	* Letters a and A should be replaced by 4
	* Letters e and E should be replaced by 3
	* Letters o and O should be replaced by 0
	* Letters t and T should be replaced by 7
	*/

	char *s1 = str;

	while (*s1 != '\0')
	{
		if (*s1 == 'a' || *s1 == 'A')
			*s1 = '4';
		else if (*s1 == 'e' || *s1 == 'E')
			*s1 = '3';
		else if (*s1 == 'o' || *s1 == 'O')
			*s1 = '0';
		else if (*s1 == 't' || *s1 == 't')
			*s1 = '7';
		s1++;
	}
	return (str);

}
