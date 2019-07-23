#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: owner
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	{
		dog_t *d;

		d = malloc(sizeof(dog_t));
		if (d == NULL)
			return (NULL);
		d->name = malloc(sizeof(name) + 1);
		if (!d->name)
		{
			free(d);
			return (NULL);
		}
		d->owner = malloc(sizeof(owner) + 1);
		if (!d->owner)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
		return (d);
	}
}
