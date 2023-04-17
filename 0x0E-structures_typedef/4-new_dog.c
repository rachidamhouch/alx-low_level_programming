#include "dog.h"

/**
 * _strdup - function that dup a string.
 * @str: Arg 1.
 * Return: deep copy of a string.
 */
char	*_strdup(char *str)
{
	int		i;
	char	*s;

	i = 0;
	while (str[i])
		i++;
	s = malloc(i + 1);
	if (!s)
		return (NULL);
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

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
	dog->name = _strdup(name);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = _strdup(owner);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
