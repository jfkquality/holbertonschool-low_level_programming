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
 * argstostr - concatenate program args
 * @ac: count of args
 * @av: list/array of args
 *
 * Return: pointer to array
 */
char *argstostr(int ac, char **av)
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

	/* l1 = getlen(str1); */
	/* l2 = getlen(str2); */

	while (i < ac)
		newlen += getlen(av[i]);

	p = malloc((newlen + ac) * sizeof(char) + 1);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l1; i++)
		p[i] = s1[i];

	for (j = 0; j < l2; i++, j++)
		p[i] = s2[j];
	p[i] = '\0';

	return (p);
}
