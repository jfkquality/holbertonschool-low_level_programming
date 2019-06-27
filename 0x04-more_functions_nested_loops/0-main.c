#include "holberton.h"
#include <stdio.h>


/**
 * main - check for upper or lower case.
 * Description: check for upper or lower case
 * Return: 1 if upper; 0 if not
 */
int main(void)
{

	int c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));

	return (0);
}
