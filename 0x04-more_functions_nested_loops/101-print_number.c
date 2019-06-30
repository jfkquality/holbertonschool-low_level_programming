#include "holberton.h"


/*
 * print_number - print any integer
 * @n: - integer to print
 * Return: 0
 */

void print_number(int n)
{
	int c, b = 0;
	int tens = 1;

	int digits(int a);
	void print_number2(int j, int f, int k);

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	c = digits(n);
	b = c;
	while (b > 1)
	{
		tens *= 10;
		b--;
	}
	if (n == 0)
		_putchar(0 + '0');

	print_number2(n, c, tens);


}
