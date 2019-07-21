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
 * str_concat - concatenate 2 strings. Return pointer.
 * @s1: string
 * @s2: string
 *
 * Return: pointer to array
 */
char *str_concat(char *s1, char *s2)
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
	  printf("if !str1\n");
		str1 = "";

	if (!str2)
		str2 = "";


	l1 = getlen(str1);
	l2 = getlen(str2);

	/* printf("l1, l2 %d, %d\n", l1, l2); */

	/* l1++; */
	/* l2++; */

	newlen = l1 + l2 + 1;

	printf("l1, l2 %d, %d\n", l1, l2);

	p = malloc((newlen) * sizeof(char));

	printf("p malloc %d\n", *p);

	if (p == NULL)
	{
	  printf("malloc failed");
	  return (NULL);
	}
	for (i = 0; i < l1; i++)
		p[i] = s1[i];

	for (j = 0; j < l2; i++, j++)
		p[i] = s2[j];
	p[i] = '\0';

	return (p);
}
