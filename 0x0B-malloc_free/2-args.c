#include <stdio.h>

/**
 * main - print program args count
 * @argc: count of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
