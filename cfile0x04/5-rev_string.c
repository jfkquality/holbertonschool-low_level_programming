#include "holberton.h"
#include <stdio.h>

/**
 * rev_string  - Print string in reverse
 * @s: passed string as pointer
 * Return: void
 */

void rev_string(char *s)
{
	char *s2;
	char *s3;
	char c;
	char d;

	s2 = s;
	s3 = s;

	while (*s2 != '\0')
	{
		s2++;
	}

	s2--;
	while (s2 > s3)
	{
		c = *s2;
		d = *s3;
		*s2 = d;
		*s3 = c;

		s2--;
		s3++;

	}
}
