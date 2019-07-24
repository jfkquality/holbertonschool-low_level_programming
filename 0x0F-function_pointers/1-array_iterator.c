#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate through an array of functions
 * @array: array pointer
 * @size: array size
 * @action: is a pointer to the function you need to use
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
