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
	/* char *hay_start = haystack; */
	int size_h = 0;
	int size_n = 0;
	/* int hay_posn_c = 0; */
	/* boolean found = 1; */

	/* Find len of both strings */

	for (; *hay1; hay1++, size_h++)
		;
	for (; *need1; need1++, size_n++)
		;

	/* hay1 = haystack; */
	/* need1 = needle; */


	/* If you reach the end of the search string, you’ve found it! ‘ */
	/* Otw, look again until the end of the original string */
	/* or too close to the end for the search string to fit. */

	/* If not found or at end or almost end of str*/

	while (hay2 < hay2 - size_n)
	{
		need2 = needle;

		while (*need2 && *hay2 < *(hay2 - size_n))
		{
		/* if (size_h = hay_posn_c || size_h - hay_posn_c < size_n) */
		/* { */
		/* 	found = 0; */
		/* 	continue; */
		/* } */

		/* if (!find_first_let(hay2, need2)) */
		/* { */
		/* 	found = 0; */
		/* 	continue; */
		/* } */
		/* hay2++; */
		/* hay_posn_c++; */
		/* need2++; */
		/* while (*need2) /\* See if succeeding letters match substring *\/ */
		/* { */
	  		if (*hay2 != *need2)
				break;

			hay2++;
			need2++;
			printf("%d\n", *hay2);
		}

	}
		if (!need1)
		  return (hay2 - size_n +1);
		else
		  return (0);
}

/* 	int find_first_let(char *h, char *n) */
/* 	{ */
/* 	char *hay1st = h; */
/* 	char *need1st = n; */

/* 	while (*hay1st) /\* find the first occurence of the firsr let in substr  *\/ */
/* 	{ */
/* 		if (*hay1st == *need1st) */
/* 		{ */
/* 			break; */
/* 		} */
/* 		ha0y1st++; */
/* 		hay_posn_c++; */
/* 	} */
/* 	return (hay1st); */
/* } */
