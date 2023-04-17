#include "dog.h"

/**
 * print_dog -  function that prints a struct dog.
 * @d: Arg 1.
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %s\n", d->age);
	printf("Owner: %s\n", d->owner);
}
