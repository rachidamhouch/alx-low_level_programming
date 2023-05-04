#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: Arg 1.
 * @m: arg 2.
 * Return: the number of bits you would need to flip to
 * get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int	i = sizeof(unsigned long int) * 8, b = 0;

	while (i--)
	{
		if ((n & 1) != (m & 1))
			b++;
		n >>= 1;
		m >>= 1;
	}
	return (b);
}
