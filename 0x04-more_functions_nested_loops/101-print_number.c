#include "main.h"
/**
 * printstr - function that prints string.
 * @str: arg 1.
 */
void printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * print_number - prints numbers
 * @n: first parameter
 */
void	print_number(int n)
{
	if (n == INT_MIN)
		printstr("-2147483648");
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n < 10)
		_putchar(n + '0');
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
