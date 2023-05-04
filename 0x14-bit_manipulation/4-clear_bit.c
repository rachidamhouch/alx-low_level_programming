#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: Arg 1.
 * @index: arg 2.
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int	n1 = *n, n2 = *n;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	n1 >>= index + 1;
	n1 <<= index + 1;
	n2 <<= sizeof(unsigned long int) * 8 - (index + 1);
	n2 >>= sizeof(unsigned long int) * 8 - (index + 1);
	*n = n2 | n1;
	return (1);
}
