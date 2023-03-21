#include "main.h"
/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	int	fib1;
	int	fib2;
	int	next;
	int	sum;

	fib1 = 1;
	fib2 = 2;
	sum = 2;
	while (1)
	{
		next = fib1 + fib2;
		if (next > 4000000)
			break;
		if (next % 2 == 0)
			sum += next;
		fib1 = fib2;
		fib2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
