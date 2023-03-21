#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @n: first arg.
 * Return: absolute value of an integer.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	return (n);
}
