#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: Arg 1.
 * Return: the sum of all its parameters.
 */
int	sum_them_all(const unsigned int n, ...)
{
	va_list				ptr;
	int					sum;
	unsigned int		i;

	sum = 0;
	i = 0;
	va_start(ptr, n);
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (sum);
}
