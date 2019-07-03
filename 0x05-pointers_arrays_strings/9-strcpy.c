#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - Copy a src string to a dest string
 *
 * dest: string pointer parameter
 * src: string pointer parament
 *
 * Return: c.
 */
char *_strcpy(char *dest, char *src)
{
	int c, i = 0;
	char *src2;
	char *src3;
	char *dest2;


	src2 = src;
	src3 = src;
	dest2 = dest;

	while (*src2 != '\0')
	{
		src2++;
		c++;
	}

	printf("%d\n", c);

	while (c >= 0)
	{
	  *(src3 + i) = *(dest2 + i);
	  i++;
	  c--;
	}

	printf("%p\n", dest2);

	dest = dest2;

	return (dest);
}
