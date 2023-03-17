#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	int i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			alx_putnbr(i);
			putchar(' ');
			alx_putnbr(j);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
