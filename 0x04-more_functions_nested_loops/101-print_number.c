#include "holberton.h"

/*
int digits(int);
void print_number2 (int, int, int)
*/


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


void print_number2 (int num, int count, int ten)
{
  int c = count;
  int d, x = 0;
  int n = num;
  int tens = ten;

  int digits(int a);

  while (c > 0)
    {
      x = n;
      n = n / tens; /* Leading digit */
      if (x > 9)
	x = x % (n * tens); /* Remaining number(s). For embedded 0's */
      d = digits(x);
      if (n == 0) /* print last digit */
	_putchar(x % 10 + '0');
      else
	{
	  _putchar(n + '0');
	  while (c - 1 - d) /* Print embedded zeros */
	    {
	      _putchar(0 + '0');
	      c--;
	      if (tens > 10)
		tens /= 10;
	    }
	}
      c--;
      if (tens > 10)
	tens /= 10;
      n = x;
    }
  _putchar('\n');
}


int digits(int n)
{
  int totalDigits = 0;

  while(n != 0)
    {
      n = n / 10;
      totalDigits ++;
    }
  return (totalDigits);
}
