#include <stdio.h>

/**
 * main - print alphabet in lower case
 * Description. Print alphabet in lower case.
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
