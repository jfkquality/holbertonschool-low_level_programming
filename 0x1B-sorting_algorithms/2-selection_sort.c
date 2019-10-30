#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - bubble sort
 * @array: list to sort
 * @size: size (# of elements) of array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
/* From https://en.wikipedia.org/wiki/Selection_sort */
/* a[0] to a[aLength-1] is the array to sort */
	size_t i, j, jMin;
	int temp;

/* advance the position through the entire array */
/*   (could do i < aLength-1 because single element is also min element) */
	for (i = 0; i < size - 1; i++)
	{
		/* find the min element in the unsorted a[i .. aLength-1] */

		/* assume the min is the first element */
		jMin = i;
		/* test against elements after i to find the smallest */
		for (j = i + 1; j < size; j++)
		{
			/* if this element is less, then it is the new minimum */
			if (array[j] < array[jMin])
			{
				/* found new minimum; remember its index */
				jMin = j;
			}
		}

		if (jMin != i)
		{
			/* swap(array[i], array[jMin]); */
			temp = array[i];
			array[i] = array[jMin];
			array[jMin] = temp;
			print_array(array, size);
		}
	}
}
