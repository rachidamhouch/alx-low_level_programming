#include "main.h"

/**
 * print_number - prints numbers
 * @n: first parameter
 */
void	print_number(int n)
{
	unsigned int	nb;

	nb = 0;
	if (n < 0)
	{
		_putchar('-');
		nb = -n;
	}
	else
		nb = n;
	if (nb < 10)
		_putchar(nb + '0');
	else
	{
		print_number(nb / 10);
		print_number(nb % 10);
	}
}
