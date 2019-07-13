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
