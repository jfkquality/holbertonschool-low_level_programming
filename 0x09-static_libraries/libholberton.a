!<arch>
//                                              38        `
100-atoi-dummy.c/
4-isalpha-dummy.c/

0-isupper.c/    1563052148  1000  1000  100664  318       `
#include <stdio.h>
#include "holberton.h"

/**
 * _isupper - determines if a character is upper or lower case
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
0-memset.c/     1563045218  1000  1000  100664  317       `
/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: char to print
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s1 = s;
	char b1 = b;
	int n1 = n;

	while (n1)
	{
		*s1 = b1;
		s1++;
		n1--;
	}
	return (s);
}

0-strcat.c/     1563045218  1000  1000  100664  403       `
#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - Concatenate a src string to a dest string
 * @dest: string pointer parameter
 * @src: string pointer parament
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	char *dest2 = dest;
	char *src2 = src;

	for (; *dest2 != '\0'; dest2++)
		;

	for (; *src2 != '\0'; src2++, dest2++)
		*dest2 = *src2;
	*dest2 = *src2;

	return (dest);
}

/0              1563046357  1000  1000  100664  44        `
int _atoi(char *s)
{
  s++;
  return (0);
}
1-isdigit.c/    1563045218  1000  1000  100664  316       `
#include <stdio.h>
#include "holberton.h"

/**
 * _isdigit - determines if a character is upper or lower case
 * @c: The character to check
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	if (c >= '0'  && c <= '9')
		return (1);
	else
		return (0);
}
1-memcpy.c/     1563045218  1000  1000  100664  373       `
/**
 * _memcpy - copy buffer in hexa
 * @dest: the address of memory to print to
 * @src: the addres of the memory to print
 * @n: # of chars from src to print
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d1 = dest;
	char *s1 = src;
	unsigned int n1 = n;

	while (n1)
	{
		*d1 = *s1;
		d1++;
		s1++;
		n1--;
	}
	return (dest);
}

1-strncat.c/    1563045218  1000  1000  100664  481       `
#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - Concatenate a src string to a dest string
 * @src: string pointer parameter
 * @dest: string pointer parameter
 * @n: int characters to concatenate
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest2 = dest;
	char *src2 = src;
	int i = 0;

	for (; *dest2 != '\0'; dest2++)
		;

	for (i = 0; i < n && *src2 != '\0'; i++, src2++, dest2++)
		*dest2 = *src2;
	*dest2 += '\0';

	return (dest);
}

2-strchr.c/     1563045218  1000  1000  100664  344       `
#include "holberton.h"

/**
 * _strchr - finc char in a string
 * @s: pointer to string to search
 * @c: character to find
 *
 * Return: pointer to found char or NULL.
 */
char *_strchr(char *s, char c)
{
	char *s1 = s;
	char c1 = c;

	while (*s1)
	{
		if (*s1 == c1)
			return (s1);
		s1++;
	}
	if (*s1 == c1)
		return (s1);
	return ('\0');
}
2-strlen.c/     1563045218  1000  1000  100775  249       `
#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Get the length of a string
 *
 * @s: string parament
 *
 * Return: c.
 */
int _strlen(char *s)
{
	int c = 0;
	char *s2;

	s2 = s;

	while (*s2 != '\0')
	{
		s2++;
		c++;
	}

	return (c);
}

2-strncpy.c/    1563045218  1000  1000  100664  475       `
#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - Copy a src string to a dest string
 * @dest: string pointer parameter
 * @src: string pointer parament
 * @n: int chars to copy
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest2 = dest;
	char *src2 = src;
	int i = 0;

	for (i = 0; i < n && *src2 != '\0'; i++, src2++, dest2++)
		*dest2 = *src2;
	/* *dest2 += '\0'; */
	for ( ; i < n; i++, dest2++)
		*dest2 = '\0';
	return (dest);
}

3-islower.c/    1563045218  1000  1000  100664  364       `
#include <stdio.h>
#include "holberton.h"

/**
 * _islower - determines if a character is upper or lower case
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * JFK - copied from 0-isupper.c for 0x09 #1.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
3-puts.c/       1563045218  1000  1000  100664  208       `
#include "holberton.h"

/**
 * _puts - output a string
 * @w: input string pointer
 * Return: void
 */
void _puts(char *w)
{
	char *s = w;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
3-strcmp.c/     1563045218  1000  1000  100664  384       `
#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compare 2 stings
 * @s1: string pointer parameter
 * @s2: string pointer parament
 * Return: The diff between the letters.
 */
int _strcmp(char *s1, char *s2)
{
	char *src1 = s1;
	char *src2 = s2;

	for (; *src1 != '\0' && *src2 != '\0'; src1++, src2++)
	{
		if (*src1 != *src2)
			return (*src1 - *src2);
	}
	return (0);
}
3-strspn.c/     1563045218  1000  1000  100664  608       `
#include "holberton.h"

/**
 * _strspn - finc sub string in a string
 * @s: pointer to string to search
 * @accept: chars to compare tod
 *
 * Return: pointer to found char or NULL.
 */
unsigned int _strspn(char *s, char *accept)
{
	char *s1 = s;
	char *acc1 = accept;
	int this_c = 0;
	int total_c = 0;

/* Find if the firsth word in s1 has all the chars of acc1 and return len */

	while (*s1)
	{
		acc1 = accept;
		this_c = 0;
		while (*acc1)
		{
			if (*s1 == *acc1)
			{
				this_c++;
				total_c++;
				break;
			}
			acc1++;
		}
		if (this_c == 0)
			return (total_c);
		s1++;
	}
	return (total_c);
}
/18             1563046194  1000  1000  100664  38        `
int _isaplha(int c)
{
  return (c);
}
4-strpbrk.c/    1563045218  1000  1000  100664  486       `
#include "holberton.h"

/**
 * _strpbrk - finc sub string in a string
 * @s: pointer to string to search
 * @accept: chars to compare tod
 *
 * Return: pointer to found char or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	char *s1 = s;
	char *acc1 = accept;


/* Find if the firsth word in s1 has all the chars of acc1 and return len */

	while (*s1)
	{
		acc1 = accept;
		while (*acc1)
		{
			if (*s1 == *acc1)
			{
				return (s1);
			}
			acc1++;
		}
		s1++;
	}
	return (0);
}
5-strstr.c/     1563045218  1000  1000  100664  943       `
#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - find sub string in a string
 * @haystack: pointer to string to search
 * @needle: chars to find
 *
 * Return: pointer to found char or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay1 = haystack;
	char *hay2 = haystack;
	char *need1 = needle;
	char *need2 = needle;
	int size_h = 0;
	int size_n = 0;

	/* Find len of both strings */
	for (; *hay1; hay1++, size_h++)
		;
	for (; *need1; need1++, size_n++)
		;

	/* If you reach the end of the search string, you’ve found it! ‘ */
	/* Otw, look again until the end of the original string */
	/* or too close to the end for the search string to fit. */

	/* If not found or at end or almost end of str*/
	while (hay2 < hay1 - size_n + 1)
	{
		need2 = needle;

		while (*need2)
		{
			if (*hay2 != *need2)
				break;
			hay2++;
			need2++;
		}
		if (!*need2)
			return (hay2 - size_n);
		hay2++;
	}
	return (0);
}

6-abs-dummy.c/  1563046114  1000  1000  100664  33        `
int abs(int n)
{
  return (n);
}

9-strcpy.c/     1563045218  1000  1000  100664  420       `
#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - Copy a src string to a dest string
 * @dest: string pointer parameter
 * @src: string pointer parament
 * Return: dest.
 */


	char *_strcpy(char *dest, char *src)
{

	char *src2 = src;
	char *dest2 = dest;

	if (dest == NULL || src == NULL)
		return (NULL);

	for (; *src2 != '\0'; src2++, dest2++)
	{
		*dest2 = *src2;
	}
	*dest2 = *src2;

	return (dest);
}
_putchar.c/     1563045218  1000  1000  100664  247       `
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

