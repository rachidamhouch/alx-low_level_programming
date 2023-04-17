#ifndef DOG_H
# define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Dog info
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 */
struct dog
{
	char	*name;
	float	age;
	char	*owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
