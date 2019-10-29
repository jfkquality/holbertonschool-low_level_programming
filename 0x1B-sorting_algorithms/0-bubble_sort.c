#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - bubble sort
 * @array: list to sort
 * @size: size (# of elements) of array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0 /* , newsize */;
	int temp = 0;

	if (size  >= 2)
	{
	/* True bubble sort way */
		while (i < size - 1)
		{
			j = 0;
			while (j < size - i - 1)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
				}
				j++;
			}
			i++;
		}
	}
}
