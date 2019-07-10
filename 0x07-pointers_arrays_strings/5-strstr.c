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
	int hay_posn_c = 0;
	boolean found = 1;

	/* Find len of both strings */

	for (; *hay1; hay1++, size_h++)
		;
	for (; *need1; need1++, size_n++)
		;

	/* hay1 = haystack; */
	/* need1 = needle; */

	while (found && *hay2 && size_h - hay_posn_c <= size_n)
	{
		if (size_h = hay_posn_c || size_h - hay_posn_c < size_n)
		{ /* If end or almost end of str*/
			found = 0;
			continue;
		}

		if (!find_first_let(hay2, need2))
		{
			found = 0;
			continue;
		}
		hay2++;
		hay_posn_c++;
		need2++;
		while (#need2) /* See if succeeding letters match substring */
		{
			if (*hay2 != *need2)
			{
				found = 0;
				continue;
			hay2++;
			need2++;
		}
	}
	return (total_c);
}

int find_first_let(char *h, char *n
	while (*hay2) /* find the first occurence of the firsr let in substr  */
	{
		if (*hay2 == *need2)
		{
			break;
		}
		hay2++;
		hay_posn_c++;

	}
	*hay_start = hay2;
		return (0);
