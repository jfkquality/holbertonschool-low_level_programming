#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void *swap(int *arr, int idx1, int idx2)
{
	int temp;

	temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
/* 	return arr; */
/* } */


/* /\* algorithm partition(A, lo, hi) is *\/ */
/* int partition(int *A, size_t lo, size_t hi, size_t size) */
/* { */
/* 	size_t i, j; */
/* 	int pivot, temp; */

/* 	pivot = A[hi]; */
/* 	i = lo; */
/* 	for (j = lo; j < hi; j++) */
/* 	{ */
/* 		if (A[j] < pivot) */
/* 		{ */
/* 			/\* swap A[i] with A[j] *\/ */
/*                         temp = A[i]; */
/*                         A[i] = A[j]; */
/*                         A[j] = temp; */
/*                         print_array(A, size); */
/* 			i++; */
/* 		} */
/* 	} */
/* 	/\* swap A[i] with A[hi]: *\/ */
/* 	temp = A[i]; */
/* 	A[i] = A[hi]; */
/* 	A[hi] = temp; */
/* 	print_array(A, size); */

/* 	return i; */
/* } */

/**
 * quick_sort - bubble sort
 * @array: list to sort
 * @size: size (# of elements) of array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	size_t i, j /* lo = 0, hi = array[size - 1] */;
	/* int *A = array; */
	/* int arrlo[size]; */
	/* int arrhi[size]; */
	int pivot = 0;


	if (size > 1)
	{
		pivot = array[size -1]; /* select any element of array */
		left = array[0]; /* first index of array */
		right = array[size - 1]; /* last index of array */
		while (left <= right)
		{
			while (array[left] < pivot)
			{
				left++;
				while (array[right] > pivot)
				{
					right--;
					if (left >= right)
					{
						swap (array[left], array[right]);
						left++;
						right--;
					}
				}
			}
		}
		/* quicksort(array from first index to right); */
		/* quicksort(array from left to last index) */
	}
}


/* 	/\* algorithm quicksort(A, lo, hi) is *\/ */
/* 	if (lo < hi) */
/* 	{ */
/* 		p = partition(A, lo, hi, size); */
/* 		/\* quick_sort(A, lo, p - 1); *\/ */
/* 		/\* quick_sort(A, p + 1, hi); *\/ */
/* 		quick_sort(A, lo, p - 1); */
/* 		quick_sort(A, p + 1, hi); */
/* 	} */
/* } */
