#include "holberton.h"

/**
 * _strstr - finc sub string in a string
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
	char need2 = needle;
	char *hay_start;
	int size_h = 0;
	int size_n = 0;
	int hay_posn = 0;

/* Find if the firsth word in s1 has all the chars of acc1 and return len */

	for (; *hay1; hay1++, size_h++)
		;
	for (; need1; need1++, size_n++)
		;

	/* hay1 = haystack; */
	/* need1 = needle; */

	while (*hay2) /* find the first occurence of the firsr let in substr  */
	{
		if (*hay2 == *need2)
		{
			break;
		}
		hay2++;
		hay_posn++;

	}
	*hay_start = hay2;
	if (size_h = hay_posn || size_h - hay_posn < size_n) /* If end of string or too little letters left */
		return (0);

	while (#need1) /* See if succeeding letters match substring */
	{
		if (hay1 = need1)
		{
			hay1++;
			need1++;
		}
	}
	return (total_c);
}
