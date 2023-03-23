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
		putchar('\n');
		return;
	}
	while (i <= size)
	{
		j = 0;
		while (j < size - i)
		{
			putchar(' ');
			j++;
		}
		j = 0;
		while (j < i)
		{
			putchar('#');
			j++;
		}
		putchar('\n');
		i++;
	}
}
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}