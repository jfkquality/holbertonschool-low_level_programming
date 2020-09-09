#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	/* int array[] = { */
	/* 	0, 1, 2, 5, 5, 6, 6, 7, 8, 9 */
	/* }; */
	int array[17] = {
		3, 4, 5, 7, 7, 7, 8, 9, 10, 11, 21, 31, 33, 33, 33, 44, 51
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 31));
	printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 7));
	printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
	printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
	printf("Found %d at index: %d\n", 999, advanced_binary(array, size, 999));
	return (EXIT_SUCCESS);
}
/* int main(void) */
/* { */
/* 	int array[17] = { */
/* 		3, 4, 5, 7, 7, 7, 8, 9, 10, 11, 21, 31, 33, 33, 33, 44, 51 */
/* 	}; */
/* 	printf("Found at index: %d\n", advanced_binary(array, 17, 31)); */
/* 	return (0); */
/* } */
