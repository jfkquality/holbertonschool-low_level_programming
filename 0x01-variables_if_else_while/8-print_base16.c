#include <stdio.h>

/**
 * main - Print all hex numbers
 * Description: Print all hex numbers, 0-f.
 * Return: 0
 */
int main(void)
{
	int n;
	char x;


	n = 0;
	while (n < 10)
	{
		/* + '0' adds ASCII 0 to convert n to a char */
		putchar(n % 10 + '0');
		n++;
	}
	x = 'a';
	while (x < 'g')
	{
		putchar(x);
		x++;
	}
	putchar('\n');


	return (0);
}
