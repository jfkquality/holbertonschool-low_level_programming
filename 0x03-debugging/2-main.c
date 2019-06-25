#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */

int main(void)
{
        int a, b, c;
        int largest;
	int largest_number(int a, int b, int c);

        a = 972;
        b = 1000;
        c = 20000;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
