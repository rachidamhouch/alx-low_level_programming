#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: Arg 1.
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
