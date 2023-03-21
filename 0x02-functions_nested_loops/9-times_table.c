#include "main.h"
/**
 * alx_putnbr - prints numbers < 1000
 * @n: first parameter
 */
void	alx_putnbr(int n)
{
	if (n < 10)
		putchar('0' + n);
	else
	{
		putchar('0' + n / 10);
		putchar('0' + n % 10);
	}
}

/**
 * times_table - function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			alx_putnbr(i * j);
			putchar(' ');
			putchar(' ');
			putchar(',');
			j++;
		}
		putchar('\n');
		i++;
	}
}
