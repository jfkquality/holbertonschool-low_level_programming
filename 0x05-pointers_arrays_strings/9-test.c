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
	p = _strcpy(s1, "Holberton!\n");
	printf("%s", s1);
	printf("%s", p);

	return (0);
}
