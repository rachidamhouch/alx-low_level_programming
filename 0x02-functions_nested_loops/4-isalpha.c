#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * @c: first arg.
 * Return: Returns 1 if c is a letter, lowercase or uppercase.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
