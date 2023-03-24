#include "main.h"
/**
 * print_number - prints numbers
 * @n: first parameter
 */
void	print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n < 10)
		_putchar(n + '0');
	else
	{
		alx_putnbr(n / 10);
		alx_putnbr(n % 10);
	}
}
