#include <stdio.h>
#include <string.h>
#include "holberton.h"

/*
 * main - print Holberton
 * Result: 0
 */

int main(void)
{
	char my_string[20];

	strcpy(my_string, "JFK");

	_putchar(my_string);

/*	i=0;
	while (i < strlen(my_string))
	{
		putchar(my_string[i]);
		i++;
	}
	putchar('\n');
	printf("%lu\n", strlen(my_string));
*/
       	return 0;
}
