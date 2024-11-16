#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated for a dog_t struct.
 * @d: A pointer to the dog_t struct to free.
 *
 * Description: Frees the memory allocated for the name and owner members,
 *              as well as the struct itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
