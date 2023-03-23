# include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: arg 1;
 */
void	print_line(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

