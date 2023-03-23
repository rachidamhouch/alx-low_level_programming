# include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: arg 1;
 */
void	print_diagonal(int n)
{
	int	i;
	int	j;

	i = 0;
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
