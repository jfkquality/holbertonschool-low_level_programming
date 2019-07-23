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
	if (d)
	{
		if (!d->name)
			printf("Name: %p\n", d->name);
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (!d->owner)
			printf("Owner: %p\n", d->owner);
		else
			printf("Owner: %s\n", d->owner);
	}
}
