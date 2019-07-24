#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - returns a pointer which is a duplicate of the string str.
 * @str: string
 * Return: pointer to array
 */
char *_strdup(char *str)
{

	int l = 0;
	int i = 0;
	char *str1 = str;
	/* int l = strlen(str1); */
	char *p;

	if (!str1)
		return (NULL);

	for (; *str1; l++, str1++)
		;
	l++;
	p = malloc((l) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	/* printf ("i, l, str[i] = %d, %d, %d\n", i, l, str[i]); */
		p[i] = str[i];

	return (p);

}

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
		char *name1, *owner1;


		if (name == NULL)
			name = "";
		if (owner == NULL)
			owner = "";
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
		name1 = _strdup(name);
		owner1 = _strdup(owner);
		d->name = name1;
		d->age = age;
		d->owner = owner1;
		return (d);
	}
}
