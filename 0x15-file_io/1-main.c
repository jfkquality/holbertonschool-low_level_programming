#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @ac: count of args
 * @av: list of args
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;
	(void) ac;
	(void) av;

	/* if (ac != 3) */
	/* { */
	/* 	dprintf(2, "Usage: %s filename text\n", av[0]); */
	/* 	exit(1); */
	/* } */
	/* res = create_file(av[1], av[2]); */
	res = create_file("_file_4", NULL);
	printf("-> %i)\n", res);
	return (0);
}
