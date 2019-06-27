#include <stdio.h>
#include <string.h>
#include "holberton.h"

/*
 * main - print Holberton
 * Description:
 * Result: 0
 */

int main(void)
{
	char my_string[] = "Holberton";
	unsigned int i;
/*	int length = strlen(my_string);
 */
	i = 0;
	for (i = 0; i < 9; i++)
	{
		_putchar(my_string[i]);
		/*i++;*/
	}
	putchar('\n');

	return (0);
}
