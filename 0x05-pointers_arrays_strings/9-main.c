#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *p;

	char *_strcpy(char *dest, char *src);

	p = _strcpy(s1, "\n");
		    /* "First, solve the problem. Then, write the code\n"); */
	printf("%s", s1);
	printf("%s", p);
	return (0);
}
