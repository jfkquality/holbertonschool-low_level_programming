#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - pointer to functions to print a name in lower & uppercase
 * @name: name of person
 * @f: point to print function
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
