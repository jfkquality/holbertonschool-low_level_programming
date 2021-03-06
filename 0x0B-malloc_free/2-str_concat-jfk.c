#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate 2 strings. Return pointer.
 * @s1: string
 * @s2: string
 * Return: pointer to array
 */
char *str_concat(char *s1, char *s2)
{

	int l1 = 0;
	int l2 = 0;
	int i = 0;
	int j = 0;
	char *str1 = s1;
	char *str2 = s2;
	char *p;

	if (!str1)
		str1 = "";

	if (!str2)
		str2 = "";

	for (; *str1; str1++, l1++)
		;

	for (; *str2; str2++, l2++)
		;
	l1++;
	l2++;

	/* printf("l1 and l2 = %d %d\n", l1, l2); */

	p = malloc((l1 + l2) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		p[i] = s1[i];

	for (j = 0; i < l1 + l2; i++, j++)
		p[i] = s2[j];

	return (p);

}
