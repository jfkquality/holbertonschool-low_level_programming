#include <stdio.h>

/**
 * main - print sizes of data types
 * Description: printf sizeof() different data types
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %lu\n", sizeof(c));
	printf("Size of an int: %lu\n", sizeof(i));
	printf("Size of a long int: %lu\n", sizeof(l));
	printf("Size of a long long intr: %lu\n", sizeof(ll));
	printf("Size of a float: %lu\n", sizeof(f));

	return (0);
}
