#include "search_algos.h"

/**
 * linear_search - search for value in array of ints use Linear search algorithm
 *
 * @array: pointer to the first element array to traverse
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int x = 0;

	if (!array)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (array[x] != value)
			printf("Value checked array[%d] = [%d]\n", x, array[x]);
		else
			return (x);
	}
	return (-1);
}
