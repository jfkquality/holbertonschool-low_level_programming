#include <stdio.h>
#include <stdlib.h>

/**
 * main - print program args count
 * @argc: count of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int i;
	int res = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		res *= atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
