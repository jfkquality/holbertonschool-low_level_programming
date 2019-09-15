#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
/* Find largest palindrome product of two 3-digit numbers */
/* Start at 999 * 999 */
/* Convert product to string */
/* Test each product string through is_palindrome() */
/* First one is the highest? */

	int a = 999;
	int b = 999;

	for (; b > 0; b--)
	{
		if (is_palindrome(atoi(a * b)))
		    printf("%d\n", a * b);
	}
	return (0);
}
