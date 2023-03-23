# include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: arg 1;
 */
void	print_square(int size)
{
	int	i;
	int	j;

	i = 0;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
