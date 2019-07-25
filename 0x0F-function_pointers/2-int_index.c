#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array pointer
 * @size: array size
 * @cmp: pointer to function
 * ...
 * Return: int.
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				break;
		}
	}
	else
		return (-1);
	return (i);
}
