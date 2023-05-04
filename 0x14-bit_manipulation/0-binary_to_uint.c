#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: Arg 1.
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int	n = 0, t = 1;
	int				i = 0;

	if (!b)
		return (0);
	i = strlen(b) - 1;
	while (i >= 0)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			n += (b[i] - '0') * t;
			t *= 2;
			i--;
		}
		else
			return (0);
	}
	return (n);
}
