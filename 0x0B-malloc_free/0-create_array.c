#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array filled with same letter
 * @size: size of array
 * @c: character to print
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i = 0;
	char *p = malloc(size * sizeof(char));


	if (!size)
		return (NULL);



	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);

}
