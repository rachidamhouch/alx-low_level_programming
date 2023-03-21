#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: first arg.
 * Return: Returns 1 if c is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
