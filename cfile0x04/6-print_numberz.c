#include <stdio.h>

/**
 * main - print numbers
 * Description. Print numbers 0-10
 * Return: 0
 */
int main(void)
{
	int n;


	n = 0;
	while (n < 10)
	{
		/* + '0' adds ASCII 0 to convert n to a char */
		putchar(n % 10 + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
