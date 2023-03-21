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
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: first parameter.
 */
void print_times_table(int n)
{
	int	i;
	int	j;

	i = 0;
	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				alx_putnbr(i, j);
				if (j != n)
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
}
