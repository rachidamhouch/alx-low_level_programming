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
	alx_putnbr(nbr / 10);
	alx_putnbr(nbr % 10);
}

/**
 * add - function that adds two integers and returns the result.
 * @n: first arg.
 */
void print_to_98(int n)
{
	while(1)
	{
		alx_putnbr(n);
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
		else 
			break ;
	}
}
