#include <stdio.h>

/**
 * main - Print numbers 1-10
 * Description: Print numbers 1-10.
 * Result 0
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
