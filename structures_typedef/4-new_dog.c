#include "dog.h"
#include <stdlib.h>

/**
 * _strlength - Calculates the length of a string.
 * @str: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
int _strlength(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 *
 * Return: A pointer to the newly created dog_t, or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;
	int i; /* Declare variables outside loops */

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_copy = malloc(_strlength(name) + 1);
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= _strlength(name); i++) /* Use previously declared variable */
		name_copy[i] = name[i];

	owner_copy = malloc(_strlength(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= _strlength(owner); i++) /* Reuse the same variable */
		owner_copy[i] = owner[i];

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
