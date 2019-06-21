#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit in a number
 * Description: print whether a random number is > 5, < 6 or 0.
 * Return: 0.
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	else
		printf("Last digit of %d is %d and is less than 6\n", n, m);

	return (0);
}
