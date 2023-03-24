#include <stdio.h>
#include <math.h>

/**
 * is_prime - is prime.
 * @nb: arg 1.
 * Return: 1 if is prime.
 */
int	is_prime(long int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= sqrt(nb))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int max;
	long int i;
	long int sq;

	n = 612852475143;
	sq = sqrt(n);
	max = 1;
	i = 0;
	while (i <= sq)
	{
		while (is_prime(i) && n % i == 0)
		{
			max *= i;
			n /= i;
		}
		i++;
	}
	printf("%ld\n", n);
	return (0);
}
