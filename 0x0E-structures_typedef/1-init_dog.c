#include "dog.h"

/**
 * init_dog -  function that initialize a variable
 * of type struct dog.
 * @d: Arg 1.
 * @name: Arg 1.
 * @age: arg 3.
 * @owner: arg 4.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	d->age = age;
	d->name = name;
	d->owner = owner;
}
