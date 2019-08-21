#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"


/**
 * getlen - get length of string.
 * @s: string pointer
 * Return: length
 */
int getlen(char *s)
{
	int l = 0;
	char *s11 = s;

	for (; *s11; s11++, l++)
		;
	return (l);
}

/**
 * _strchr - finc char in a string
 * @s: pointer to string to search
 * @c: character to find
 *
 * Return: pointer to found char or NULL.
 */
/* char *_strchr(char *s, char c) */
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
/**
 * make_arr - make array of words
 * @wcount: word count
 * @len: len of str
 * @word: word from input string stripped of extra spaces
 * @p: copy of word
 *
 * Return: pointer to array
 */
char **make_arr(int wcount, int len, char *word, char *p)
{
	int i = 0, j = 0, wlen = 0;
	char **words;

	words = malloc((len + wcount) * sizeof(char));
	for (i = 0; i < wcount; i++, word++, p++)
	{
		wlen = 0;
		for (; *word != ' '; wlen++, word++)
			;
		words[i] = malloc(wlen * sizeof(char) + 1);
		for (j = 0; j < wlen; j++, p++)
		{
			words[i][j] = *p;
		}
		words[i][j] = '\0';
	}
	return (words);
}
/**
 * strtow - parse a string into array of words
 * @str: the string to parse
 *
 * Return: pointer to array
 */
/* get the length of the string. */
/* allocate space for a 2D array from len of string */
/* allocate rows based on the length of the words */
/* count the number of words in the string => array rows */
/* keep track of the start of a word. */
/* end of a word is when a space is found */
/* start of next word is when the space(s) end */

/* char *argstostr(int ac, char **av) */
char **strtow(char *str)
{
	int len = 0, wcount = 0, spaces = 0;
	char *p, *p1, *str1, *wstart, *wend = NULL, *word = NULL;
	char **words = &str;

	if (str == NULL)  /* (str == "" || str == NULL) */
		return (NULL);
	p = malloc(getlen(str) * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	str1 = str;
	wstart = str;
	wend = str;
	p1 = p;
	while (*str1)
	{
		spaces = 0;
		for (; *str1 == ' '; str1++, spaces++)
			;
		if (*str1 == '\0') /* ends w spaces */
			break;
		wstart = str1;
		for (; *str1 != ' '; str1++, len++)
			;
		wend = str1;
		for (; wstart <= wend; p1++, wstart++)
			*p1 = *wstart; /* use words not p */
		*p1 = '\0';
		wcount++;
		wstart = str1;
	}
	word = p;
	words = make_arr(wcount, len, word, p);

	return (words);
}
