#include <stdio.h>

/**
 * main - print numbers
 * Description. Print numbers 0-10
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar(i % 10);
		i++;
	}
	putchar('\n');

	return (0);
}
