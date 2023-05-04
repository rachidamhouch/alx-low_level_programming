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
		n <<= 1;
		n |= b[i] - '0';
		i++;
	}
	printf("%u\n", n);
	return (n);
}
