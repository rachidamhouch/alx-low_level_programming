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
		print_number(n / 10);
		print_number(n % 10);
	}
}
