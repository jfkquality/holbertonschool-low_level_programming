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
typedef struct dog dog_t;
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);
#endif
