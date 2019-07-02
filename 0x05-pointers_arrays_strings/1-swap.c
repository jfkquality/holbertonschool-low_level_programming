#include "holberton.h"
#include <stdio.h>


/**
 * swap_int - swap variables with pointers
 * @aa: first passed parameter
 * @bb: 2nd passed parameter
 * Return: void
 */
void swap_int(int *aa, int *bb)
{

	int c;

	c = *bb;
	*bb = *aa;
	*aa = c;
}
