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
		if (!d->age)
			printf("Name: %f\n", d->age);
		else
			printf("Name: %f\n", d->age);
		if (!d->owner)
			printf("Name: %p\n", d->owner);
		else
			printf("Name: %s\n", d->owner);
	}
}
