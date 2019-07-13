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
	int c = 0, i = 0;
	/* char *src2 = src; */

	if (dest == NULL || src == NULL)
		return NULL;
	/* printf("c is  %d\n", c); */
	/* printf("i is %d\n", i); */

	/* printf("src: %s\n", src) */;

	while (*(src + c) != '\0')
	{
		/* printf("src: %s\n", src + c); */
		c++;
	}

	/* if (*(src + c) == '\0') */
	/* 	printf("%d %s\n", *(src + c), "hi"); */
	/*
	 *	printf("%d\n", c);
	 *
	 *	printf("hello %s", src);
	 *
	 *	printf("%d\n", *src);
	*/

	for (; i <= c; i++)
	{
	  /*
	   *	  printf("%d ", *src2++);
	  */
		*(dest + i) = *(src + i);
	}

	/* if (*(dest + i - 1) == '\0') */
	/* 	printf("%d %s\n", *(dest + i - 1), "bye"); */
	/* 	printf("%d %s\n", *(dest + c), "bye2"); */

	/* printf("%s", dest); */


	return (dest);
}
