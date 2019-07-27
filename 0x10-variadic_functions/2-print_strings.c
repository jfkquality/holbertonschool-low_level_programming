#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print  all string parameters.
 * @separator: comma space
 * @n: number of parameters
 * @...: variadic parameter
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *word;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(list, char *);
		if (i > 0)
		{
			if (separator)
				printf("%s", separator);
			if (!word)
				printf("%p", word);
			else
				printf("%s", word);
		}
		else
		{
			if (!word)
				printf("%p", word);
			else
				printf("%s", word);
		}
	}
	printf("\n");

	va_end(list);
}
