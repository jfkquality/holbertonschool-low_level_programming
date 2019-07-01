#include "holberton.h"
#include <stdio.h>

void reset_to_98(int *n)
{
	printf("Value of n: %d\n", n);
	printf("Address of n: %d\n", &n);
	*n = 98;

}
