#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Short description
 * @d: dog pointer
 * @name: First member
 * @age: Second member
 * @owner: owner
 *
 * Description: Longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* d = malloc(sizeof(struct dog)); */
	/* if (d == NULL) */
	/* return (NULL); */
	d->name = name;
	d->age = age;
	d->owner = owner;
	/* return (d);  */
}
