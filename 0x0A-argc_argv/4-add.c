#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

/**
 * isnumber - determine if array is a number
 * @number: array
 *
 * Return: true or false
 */

bool isnumber(char number[])
{
	int j = 0;

	/* check for neg numbers */
	/* if (number[0] == '-') */
	/* 	j = 1; */

	while (number[j] != 0)
	{
		if (!isdigit(number[j]))
			return (false);
		j++;
	}
	return (true);
}



/**
 * main - print program args count
 * @argc: count of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int i;
	int res = 0;

	if (argc == 1)
		;
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isnumber(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			res += atoi(argv[i]);
	}
	}
	printf("%d\n", res);
	return (0);
}
