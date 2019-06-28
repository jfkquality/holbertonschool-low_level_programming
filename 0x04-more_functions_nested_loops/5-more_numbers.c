#include "holberton.h"
#include <stdio.h>

/**
 * more_numbers - print number 0-4 ten times
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		k = 0;
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
				k = j * 10;
			else
				k = j;
			_putchar(k / 10 + '0');
			if (j < 10)
				continue;
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
