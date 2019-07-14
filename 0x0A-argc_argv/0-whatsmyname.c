#include <stdio.h>

/**
 * main - print program name
 * @argc: count of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
