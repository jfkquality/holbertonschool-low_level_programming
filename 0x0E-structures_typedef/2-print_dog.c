#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Short description
 * @d: dog pointer
 *
 * Description: Longer description
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Name: %f\n", d->age);
	printf("Name: %s\n", d->owner);
}
