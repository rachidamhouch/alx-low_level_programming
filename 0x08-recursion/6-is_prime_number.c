#include "main.h"

/**
 * is_prime_number2 -  function that returns 1 if the
 * input integer is a prime number, otherwise return 0.mber.
 * @n: Arg 1.
 * @i: Arg 1.
 * Return: 1 or 0;
 */
int is_prime_number2(int n, int i)
{
	if (i > n / i)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_number2(n, i + 1));
}

/**
 * is_prime_number -  function that returns 1 if the
 * input integer is a prime number, otherwise return 0.mber.
 * @n: Arg 1.
 * Return: 1 or 0;
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	return (is_prime_number2(n, 2));
}
