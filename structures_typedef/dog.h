#ifndef DOG_H
#define DOG_H

#include <stdlib.h> /* For NULL */

/**
 * struct dog - Defines a new type representing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
