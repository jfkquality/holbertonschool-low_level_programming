#include <stdio.h>

/**
 * main - print program args count
 * @argc: count of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
