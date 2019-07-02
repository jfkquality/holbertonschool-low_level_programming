#include "holberton.h"
#include <stdio.h>

void swap_int(int *aa, int *bb)
{

	int c;

       	c = *bb;
	*bb = *aa;
       	*aa = c;
}
