#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer which is a duplicate of the string str.
 * @str: string
 * Return: pointer to array
 */
char *_strdup(char *str)
{

	int i = 0;
	char *str1 = str;
	int l = strlen(str1);

	char *p = malloc(l * sizeof(char));


	if (!str1)
		return (NULL);



	if (p == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		p[i] = str1[i];

	return (p);

}
