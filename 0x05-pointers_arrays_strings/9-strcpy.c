#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - Copy a src string to a dest string
 * @dest: string pointer parameter
 * @src: string pointer parament
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int c, i = 0;
	char *src2 = src;


	while (*(src2 + c) != '\0')
	{
		c++;
	}
	/*
	 *	printf("%d\n", c);
	 *
	 *	printf("hello %s", src);
	 *
	 *	printf("%d\n", *src);
	*/

	c++;
	for (i = 0; i <= c; i++)
	{
	  /*
	   *	  printf("%d ", *src2++);
	  */
		*(dest + i) = *(src + i);
	}

	printf("%s", dest);


	return (dest);
}
