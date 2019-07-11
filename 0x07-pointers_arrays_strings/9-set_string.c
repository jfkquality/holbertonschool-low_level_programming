#include "holberton.h"
#include <stdio.h>


/**
 * set_string - set value of a pointer to a char **
 * @s: dest double pointer
 * @to: source pointer
 * Return: void
 */
void set_string(char **s, char *to)
{
	char **s1 = s;
	char *to1 = to;

	*s1 = to1;
}
