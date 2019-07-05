#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - Copy a src string to a dest string
 * @dest: string pointer parameter
 * @src: string pointer parament
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest2 = dest;
	char *src2 = src;

	for (; *src2 != '\0'; dest2++, src2++)
		*dest2 = *src2;
	*dest2 = '\0';
	return (dest);
}
