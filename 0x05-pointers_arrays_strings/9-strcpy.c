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

	if (*(src2 + c) == '\0')
		printf("%d %s\n",*(src + c), "hi");
	/*
	 *	printf("%d\n", c);
	 *
	 *	printf("hello %s", src);
	 *
	 *	printf("%d\n", *src);
	*/

	for (i = 0; i < c; i++)
	{
	  /*
	   *	  printf("%d ", *src2++);
	  */
		*(dest + i) = *(src + i);
	}

	*(dest + i) = *(src + i);

	if (*(dest + i) == '\0') 
		printf("%d %s\n", *(dest + i), "bye");

	printf("%s", dest);


	return (dest);
}
