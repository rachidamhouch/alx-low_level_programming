#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: Arg 1.
 * @index: arg 2.
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int	t = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	while (index--)
		t *= 2;
	if (t <= *n)
		*n -= t;
	return (1);
}
