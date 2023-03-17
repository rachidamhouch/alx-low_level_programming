#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	alx_putnbr(int n)
{
	if (n < 10)
	{
		putchar('0');
		putchar('0' + n);
	}
	else
	{
		putchar('0' + n / 10);
		putchar('0' + n % 10);
	}
}

/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	alx_putnbr(0);
	alx_putnbr(1);
	alx_putnbr(20);
	return (0);
}
