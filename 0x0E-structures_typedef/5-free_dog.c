#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Short description
 * @d: pointer
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	if (d)
		free(d);
}
