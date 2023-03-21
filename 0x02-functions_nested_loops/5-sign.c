#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 * @n: first arg.
 * Return: 1 if n > 0, 0 if n = 0, -1 if n < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+", 1);
		return (1);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		return (-1);
	}
	write(1, "0", 1);
	return (0);
}
