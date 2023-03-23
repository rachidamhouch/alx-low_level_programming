# include "main.h"

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
 * more_numbers - function that prints the numbers,
 */
void more_numbers(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		printstr("01234567891011121314");
		i++;
	}
}
