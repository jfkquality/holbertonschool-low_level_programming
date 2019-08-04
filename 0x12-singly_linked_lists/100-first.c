#include <stdio.h>
#include "lists.h"

/**
 * myfirst - print line before main()
 *
 * Return: nothing
 */

void myfirst(void)  __attribute__ ((constructor));

void myfirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

