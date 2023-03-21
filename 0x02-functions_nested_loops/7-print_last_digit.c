#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: first arg.
 * Returns the value of the last digit
 */
int print_last_digit(int n)
{
	char	a;

	a = n % 10;
	write(1, &a, 1);
	return (a);
}
