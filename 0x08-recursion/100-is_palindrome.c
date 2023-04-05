#include "main.h"

/**
 * is_palindrome2 - function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: Arg 1.
 * @i: Arg 2.
 * @y: Arg 3.
 * Return: 1 or 0;
 */
int is_palindrome2(char *s, int i, int y)
{
	if (s[i] != s[y])
		return (0);
	if (i >= y)
		return (1);
	return (is_palindrome2(s, i + 1, y - 1));
}

/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: Arg 1.
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	return (is_palindrome2(s, 0, strlen(s) - 1));
}
