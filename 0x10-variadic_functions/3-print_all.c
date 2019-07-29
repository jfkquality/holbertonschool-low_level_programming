#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
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
 * separator - see if separator is needed
 *
 * @count: count of fomrat length
 * @length: length of format string
 * @okflag: good char flag
 *
 * Return: c.
 */

void separator(int count, int length, int okflag)
{
	length = length;
	if (count < length && okflag)
		printf(", ");
}


/**
 * null_str_chk - see if string is null
 *
 * @word: string
 *
 * Return: c.
 */
void null_str_chk(char *word)
{
	switch (word == '\0')
	{
	case (1):
		printf("%p", word);
		break;
	default:
		printf("%s", word);
	}
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
	_Bool good = 0;
	char *word;
	/* int len; */

	va_start(list, format);
	/* len = _strlen(format); */
	while (format && i < _strlen(format))
	{
		separator(i, _strlen(format), good);
		good = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			/* good = 1; */
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			/* good = 1; */
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			/* good = 1; */
			break;
		case 's':
			word =  va_arg(list, char *);
			null_str_chk(word);
			break;
		default:
			good = 0;
			i++;
			continue;
		}
		i++;
		good = 1;
	}
	printf("\n");
	va_end(list);
}
