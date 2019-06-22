#include <stdio.h>

/**
 * main - print alphabet backward
 * Description. Print alphabet backward.
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
