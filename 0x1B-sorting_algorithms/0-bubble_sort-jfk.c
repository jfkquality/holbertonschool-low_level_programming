#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0 /* , newsize */;
	int temp = 0;

	/* True bubble sort solution */
	/* while (i < size - 1) */
	/* { */
	/* 	j = 0; */
	/* 	while (j < size - i - 1) */
	/* 	{ */
	/* 		if (array[j] > array[j + 1]) */
	/* 		{ */
	/* 			temp = array[j]; */
	/* 			array[j] = array[j + 1]; */
	/* 			array[j + 1] = temp; */
	/* 			print_array(array, size); */
 	/* 			/\* i = j; *\/ */
	/* 			/\* continue; *\/ */
	/* 			/\* break; *\/ */
	/* 		} */
	/* 		j++; */
	/* 	} */
	/* 	i++; */
	/* } */

	/* My solution. Less passes? But not true bubble? */
	while (i < size-1)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
 				/* i = j; */
				/* continue; */
				/* break; */
			}
			j++;
		}
		i++;
	}


	/* Another solution; translated from Python */
	/* while (size > 1) */
	/* { */
	/* 	newsize = 0; */
	/* 	while (i < size) */
	/* 	{ */
	/* 		j = i + 1; */
	/* 		if (array[i] > array[j]) */
	/* 		{ */
	/* 			temp = array[i]; */
	/* 			array[i] = array[j]; */
	/* 			array[j] = temp; */
	/* 			print_array(array, size); */
	/* 			newsize = i; */
	/* 			/\* i = j; *\/ */
	/* 			/\* continue; *\/ */
	/* 			/\* break; *\/ */
	/* 		} */
	/* 		i++; */
	/* 	} */
	/* 	size = newsize; */
	/* 	/\* printf("%lu\n", size); *\/ */
	/* } */
}
