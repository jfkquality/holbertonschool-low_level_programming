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

/* char *str_concat(char *s1, char *s2) */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int newlen = 0;
	char *p;
	char *p1;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		newlen += getlen(av[i]);
		i++;
	}

	p1 = malloc((newlen + ac) * sizeof(char) + 1);
	p = p1;
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < getlen(av[i]); j++, p++)
		{
			*p = av[i][j];
		}
		*p = '\n';
		p++;
	}
	p = '\0';

	return (p1);
}
