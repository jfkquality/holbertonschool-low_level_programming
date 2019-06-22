#include <stdio.h>

/**
 * main - Print all single numbers 0-9
 * Description: Print numbers 0-9;
 * Separated by comma-space (, )
 * Only use putchar()
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
		if (n == 9)
		{
			n++;
			continue;
		}
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');


	return (0);
}
