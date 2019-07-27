#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

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
	unsigned int i = 0;
	/* char separator[] = ", "; */

	va_start(list, format);

	/* printf("FORMAT LENGTH: %d. FORMAT[0]\s\n", (int)strlen(format), format[0]); */

	while (i < strlen(format))
	{
		if (i != 0)
			printf(", ");
		switch (format[i])
		{
		case 'c':
		  printf("%c", va_arg(list, int));
			break;
		case 'i':
		  printf("%d", va_arg(list, int));
			break;
		case 'f':
		  printf("%f", va_arg(list, double));
			break;
		case 's':
		  printf("%s", va_arg(list, char *));
			break;
		default:
			;
		}
		i++;
	}
	printf("\n");

	/* word = va_arg(list, char *); */
	/* if (!word) */
	/* 	printf("%p\n", word); */
	/* else */
	/* 	printf("%s\n", word); */

	va_end(list);
}
