#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new type representing a dog.
 * @name: The name of the dog (type char *).
 * @age: The age of the dog (type float).
 * @owner: The name of the dog's owner (type char *).
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
