#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: Arg 1.
 */
void print_binary(unsigned long int n)
{
	if (n > 2)
		print_binary(n >> 1);
	if (n & 1)
		printf("1");
	else
		printf("0");
}
