#include "main.h"
/**
 * alx_putnbr - prints numbers
 * @n: first parameter
 */
void	alx_putnbr(int n)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		putchar('-');
		nbr *= -1;
	}
	if (nbr < 10)
		putchar(nbr + '0');
	else
	{
		alx_putnbr(nbr / 10);
		alx_putnbr(nbr % 10);
	}
}

/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 * @n: first arg.
 */
void print_to_98(int n)
{
	while (1)
	{
		alx_putnbr(n);
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
		else
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
