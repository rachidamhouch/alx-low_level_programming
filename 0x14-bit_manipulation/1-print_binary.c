#include "main.h"
/**
 * help_print_binary - function that prints
 * the binary representation of a number.
 * @n: Arg 1.
 */
void help_print_binary(unsigned long int n)
{
	if (n)
		help_print_binary(n >> 1);
	else
		return;
	printf("%lu", n & 1);
}

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: Arg 1.
 */
void print_binary(unsigned long int n)
{
	if (!n)
		printf("0");
	help_print_binary(n);
}
