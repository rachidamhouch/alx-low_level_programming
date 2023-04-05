#include "main.h"

/**
 * sqrtrecursion - function that returns the natural square root of a number.
 * @n: Arg 1.
 * @i: Arg 2.
 * Return: the natural square root of a number.
 */
int sqrtrecursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrtrecursion(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: Arg 1.
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrtrecursion(n, 1));
}
