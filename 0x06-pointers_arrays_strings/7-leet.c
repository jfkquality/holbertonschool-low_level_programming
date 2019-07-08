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
	* Letters l and L should be replaced by 1
	*/

	char *s1 = str;
	char *c = "aAeEoOtTlL";
	char *c1 = "4433007711";
	char *d = c;
	char *d1 = c1;

	/* char *c1 = c; */

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
