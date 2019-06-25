#include <stdio.h>

/**
 * main - Print all combinations of 2 digit numbers of digits 0-9
 * Description: Print all combinations of 2 digit numbers of digits 0-9.
 * Should be 100 numbers: 0-99
 * Only use putchar; 5x max
 * No char variable types
 * Return: 0
 */
int main(void)
{
	int n;
	int n2;


	n = 0;
	while (n < 10)
	{
		while (n2 < 10)
		{
			putchar(n % 10 + '0');
			putchar(n2 % 10 + '0');
			if (n == 9 && n2 == 9)
			{
				n++;
				n2++;
				continue;
			}
			putchar(',');
			putchar(' ');
			n2++;
		}
		n++;
		n2 = 0;
	}
	putchar('\n');


	return (0);
}
