#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "Learn from trytoprogram.com";
	char *f = "rtyn eaL ofm";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
