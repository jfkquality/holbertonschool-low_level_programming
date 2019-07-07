#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compare a src string to a dest string
 * @s1: string pointer parameter
 * @s2: string pointer parament
 * Return: -1, 0 or 1.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *src1 = s1;
	char *src2 = s2;

	for (; *src1 != '\0'; src1++, i++)
		;

	for (; *src2 != '\0'; src2++, j++)
		;

	if (s1 < s2)
		return (-15);
	else if (s1 > s2)
		return (15);
	else
		return (0);
}
