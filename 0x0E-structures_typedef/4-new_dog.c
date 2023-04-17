#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: Arg 1.
 * @age: arg 2.
 * @owner: arg 3.
 * Return: NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = strdup(name);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = strdup(owner);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
