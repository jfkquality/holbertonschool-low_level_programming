#include "holberton.h"

/*
 * main - print Holberton
 * Description: Write a program that prints Holberton, followed by a new line.
 * Result: 0
 */

int main(void)
{
	char my_string[] = "Holberton";
	int i;
/*
 *	int length = strlen(my_string);
 */
	i = 0;
	for (i = 0; i < 9; i++)
	{
		_putchar(my_string[i]);
		/*i++;*/
	}
	_putchar('\n');

	return (0);
}
