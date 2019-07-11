#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	/* char *s = "wwworl hello, world"; */
	/* char *f = "world"; */
	char *t;

	/* t = _strstr(s, f); */
	t = _strstr("First, solve the problem. Then, write the code.", "solve");
	printf("%s\n", t);
	return (0);
}
