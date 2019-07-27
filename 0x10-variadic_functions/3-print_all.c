#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"


/**
 * _strlen - Get the length of a string
 *
 * @s: string parament
 *
 * Return: c.
 */
int _strlen(const char * const s)
{
	int c = 0;
	const char *s2;

	s2 = s;

	while (*s2 != '\0')
	{
		s2++;
		c++;
	}

	return (c);
}

/**
 * print_all - print all parameters.
 * @char *: string?
 * @format: print format specifier (to find # params)
 * @...: variadic parameter
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	_Bool good;

	good = 1;
	va_start(list, format);
	while (i < _strlen(format))
	{
		if (i > 0 && good)
			printf(", ");
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			good = 1;
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			good = 1;
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			good = 1;
			break;
		case 's':
			printf("%s", va_arg(list, char *));
			good = 1;
			break;
		default:
			good = 0;
			break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
