#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalize all words of a string
 * @str: passed array as pointer
 * Return: string
 */
char *cap_string(char *str)
{
  /**
   * 1. If the first char is a let, capitalize it if it's not (i.e. if it's between a-z then -32).
   * 2. Continue until separator found.
   * 3. Capitalize the next letter if it's not (i.e. if it's between a-z then -32) 
   * 4. Repeat from step 2 until end of source.
  */
	char *s1 = str;
	char *test = " \t\n,;.!?\"(){}";
	char *test2 = test;

	while (*s1 != '\0')
	{
	  while (*test2 != '\0')
	  {
	    if (*s1 == *test2)

		if (*s1 >= 'a' && *s1 <= 'z')
			*s1 = *s1 - 32;
		s1++;
	  }
	}
	return (str);
}
