#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 */
void	print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
		putchar(a++);
	putchar('\n');
}

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase.
 */
void	print_alphabet_x10(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
