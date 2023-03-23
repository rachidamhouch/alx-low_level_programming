# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/**
 * _isupper - function that checks for alphabetic character.
 * @c: first arg.
 * Return: Returns 1 if c is uppercase, Returns 0 otherwise.
 */
int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z'));
}
