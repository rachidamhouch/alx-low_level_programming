#include "main.h"
/**
 * int _islower - checks for lowercase character.
 * Return: Returns 1 if c is lowercase
 * @c: first arg.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
