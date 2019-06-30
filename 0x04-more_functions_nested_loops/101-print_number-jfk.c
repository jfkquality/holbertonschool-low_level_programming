#include "holberton.h"

void print_number(int n)
{
	int c, b, d = 0;
	int x = n;
	int tens = 1;

	int digits(int a);
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
	while (c > 0 )
	{
		x = n;
		n = n / tens; /* Leading digit */
		if (x > 9)
			x = x % (n * tens); /* Remaining number(s). If embedded 0's, will be < digits left */
	 	d = digits(x);
		if (n == 0) /* print last digit */
		{
			_putchar(x % 10 + '0');
 		}
		else
		{
			_putchar(n + '0');
			while (c - 1 - d) /* Print embedded zeros */
			{
				_putchar(0 + '0');
				c --;
				if (tens > 10)
					tens /= 10;
			}

		}
		c --;
		if (tens > 10)
			tens /= 10;
		
		n = x;
	}

		_putchar('\n');
	
}


