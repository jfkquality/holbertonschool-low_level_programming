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

	for (i = 0; i < n - 1; i++)
	{
		word = va_arg(list, char *);
		if (separator)
		{
			if (!word)
				printf("%p%s", word, separator);
			else
				printf("%s%s", word, separator);
		}
	}
	word = va_arg(list, char *);
	if (!word)
		printf("%p\n", word);
	else
		printf("%s\n", word);

	va_end(list);
}
