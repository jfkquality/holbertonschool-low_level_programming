#include "search_algos.h"
#include <assert.h>

/**
 * binary_search - search for value in array of ints use Linear search algorthm
 *
 * @array: pointer to the first element array to traverse
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t m = size / 2;
	size_t found;
	size_t x;

	if (size == 0)
	{
		return -1;
	}

	printf("Searching in array: ");

	for (x = 0; x < size - 1; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);

	if (array[m] == value)
	{
		found = m;
	}
	else if (array[m] < value)
	{
		/* Upper half. We'll search in upper half of the current array with new length  */
		/* of the upper half. */
		found = binary_search(array + m + 1, size - m - 1, value);

		if (found != (-1))
		{
			/* Since we've found a key, need to offset it to make valid in the  */
			/* current search scope */
			found += m + 1;
		}
	}
	else
	{
		/* Lower half, there is no need to offset the array.  */
		/* New array length is equal to the current middle point. */
		found = binary_search(array, m, value);
	}

	/* assert(found == -1 || (found >= 0 && found < size && arr[found] == key)); */

	return found;
}
/* { */
/* 	size_t x = 0; */
/* 	int i = 0; */

/* 	if (!array) */
/* 		return (-1); */

/* 	/\* printf("SIZE = %lu.\n", size); *\/ */

/* 	printf("Searching in array: "); */

/* 	for (x = 0; x < size - 1; x++) */
/* 		printf("%d, ", array[x]); */
/* 	printf("%d\n", array[x]); */


/* 	x = (size) / 2; */

/* 	/\* printf("X = (SIZE - 1) / 2 = %lu. ARRAY[X] = %d\n", x, array[x]); *\/ */

/* 	if (array[x] == value) */
/* 		return (x); */
/* 	if (array[x] < value)  /\* Then go right *\/ */
/* 	{ */
/* 		i = binary_search(array + x + 1, size - x - 1, value); */
/* 		if (i != -1) */
/* 			return (i + x + 1); */
/* 	} */
/* 		/\* return (binary_search(&array[x + 1], x, value)); *\/ */
/* 	/\* if (value > array[x]) *\/ */
/* 	else */
/* 		return binary_search(array, x - 1, value); */
/* 		/\* return (binary_search(array, x, value)); *\/ */

/* 	return (-1); */
/* } */
/*  */


/* int binarySearch(int arr[], int l, int r, int x) */
/* { */
/* 	int y = l; */

/*     if (r >= l) { */
/*         int mid = l + (r - l) / 2; */


/* 	printf("Searching in array: "); */

/* 	for (y = l; y < r; y++) */
/* 		printf("%d, ", arr[y]); */
/* 	printf("%d\n", arr[y]); */


/*         /\* If the element is present at the middle *\/ */
/*         /\* itself *\/ */
/*         if (arr[mid] == x) */
/*             return mid; */

/*         /\* If element is smaller than mid, then *\/ */
/*         /\* it can only be present in left subarray *\/ */
/*         if (arr[mid] > x) */
/*             return binarySearch(arr, l, mid - 1, x); */

/*         /\* Else the element can only be present *\/ */
/*         /\* in right subarray *\/ */
/*         return binarySearch(arr, mid + 1, r, x); */
/*     } */

/*     /\* We reach here when element is not *\/ */
/*     /\* present in array *\/ */
/*     return -1; */
/* } */

/* int main(void) */
/* { */
/* 	int arr[] = { 2, 3, 4, 10, 40 }; */
/* 	int n = sizeof(arr) / sizeof(arr[0]); */
/* 	int x = 40; */
/* 	int result = binarySearch(arr, 0, n - 1, x); */
/* 	(result == -1) ? printf("Element is not present in array\n") */
/* 		: printf("Element is present at index %d\n", */
/* 			 result); */
/* 	return 0; */
/* } */
