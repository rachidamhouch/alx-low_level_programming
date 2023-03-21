#include "main.h"
/**
 * alx_putnbr - prints numbers < 1000
 * @n: first parameter
 */
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
 * jack_bauer - function that prints every minute of the day.
 */
void jack_bauer(void)
{
	int		h;
	int		m;

	h = 0;
	m = 0;
	while (h < 24)
	{
		alx_putnbr(h);
		putchar(':');
		alx_putnbr(m);
		putchar('\n');
		m++;
		if (m == 60)
		{
			h++;
			m = 0;
		}
	}
}
