#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 * @argc: # of params
 * @argv: list of params
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int int1, int2;
	char oper[] = "+-*/%";

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!strchr(oper, *argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* oper = *argv[2]; */
	int1 = atoi(argv[1]);
	int2 = atoi(argv[3]);

	res = (*get_op_func(argv[2]))(int1, int2);
	printf("%d\n", res);

	return (0);
}
