#include <stdio.h>
#include <string.h>
#include "holberton.h"

char  _putchar(char my_string[])
{
	int length = strlen(my_string);

	int i =  0;

	for (i=0; i<length; i++)
	{
		putchar(my_string[i]);	
	}
	putchar('\n');

	return (0);
}
