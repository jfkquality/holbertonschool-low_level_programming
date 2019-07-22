#ifndef DOG_H
#define DOG_H

/**
 * struct dog  - Short description
 * @name: First member
 * @age: Second member
 * @owner: owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *, char *, float, char *);
#endif
