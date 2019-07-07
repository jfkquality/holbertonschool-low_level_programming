#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compare 2 stings
 * @s1: string pointer parameter
 * @s2: string pointer parament
 * Return: The diff between the letters.
 */
int _strcmp(char *s1, char *s2)
{
	int c1 = 0;
	int c2 = 0;
	char *src1 = s1;
	char *src2 = s2;

	for (; *src1 != '\0' && *src2 != '\0'; src1++, srr2++, c1++)
		if (
		;

	for (; *src1 != '\0'; src1++, c1++)
		;

	for (; *src2 != '\0'; src2++, c2++)
		;

	if (s1 < s2)
		return (-15);
	else if (s1 > s2)
		return (15);
	else
		return (0);
}
