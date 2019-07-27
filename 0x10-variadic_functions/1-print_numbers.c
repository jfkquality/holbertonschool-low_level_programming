#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print  all integer  parameters.
 * @separator: comma space
 * @n: number of parameters
 * @...: variadic parameter
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (n > 1)
		{
			if (separator)
				printf("%d%s", va_arg(ap, int), separator);
		}
	}
	printf("\n");

	va_end(ap);
}
