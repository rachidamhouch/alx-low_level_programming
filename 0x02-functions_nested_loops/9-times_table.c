#include "main.h"
/**
 * alx_putnbr - prints numbers < 1000
 * @n: first arg'
 * @m: second arg.
 */
void	alx_putnbr(int n, int m)
{
	if (n * m < 10)
	{
		if (m)
			putchar(' ');
		putchar('0' + n * m);
	}
	else
	{
		putchar('0' + (n * m) / 10);
		putchar('0' + (n * m) % 10);
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
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			alx_putnbr(i, j);
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		putchar('\n');
		i++;
	}
}
