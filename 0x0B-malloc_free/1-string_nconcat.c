#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * getlen - get length of string.
 * @s: string pointer
 * Return: length
 */
int getlen(char *s)
{
	int l = 0;
	char *s11 = s;

	for (; *s11; s11++, l++)
		;

	return (l);
}

/**
 * string_nconcat - concatenate 2 strings. Return pointer.
 * @s1: string
 * @s2: string
 * @n: num of s2 to concat
 * Return: pointer to array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int newlen = 0;
	char *str1 = s1;
	char *str2 = s2;
	char *p;

	if (!str1)
		str1 = "";

	if (!str2)
		str2 = "";


	l1 = getlen(str1);
	l2 = getlen(str2);

	if (n >= l2)
		n = l2;

	newlen = l1 + n;

	p = malloc((newlen) * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		p[i] = s1[i];

	for (j = 0; j < n; i++, j++)
		p[i] = s2[j];
	p[i] = '\0';

	return (p);
}
