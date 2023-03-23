# include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: arg 1;
 */
void	print_triangle(int size)
{
	int	i;
	int	j;

	i = 1;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i <= size)
	{
		j = 0;
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
