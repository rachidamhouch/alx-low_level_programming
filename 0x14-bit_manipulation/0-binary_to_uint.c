#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: Arg 1.
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int	n = 0, i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
		n <<= 1;
		n |= b[i] - '0';
		i++;
	}
	return (n);
}
