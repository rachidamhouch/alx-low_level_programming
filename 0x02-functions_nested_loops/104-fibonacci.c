#include "main.h"
/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	int			i;
	long int	fib1, fib2, fib3, fib4, next, next1;

	fib1 = 1;
	fib2 = 2;
	i = 2;
	printf("%ld, %ld, ", fib1, fib2);
	while (i < 91)
	{
		next = fib1 + fib2;
		printf("%ld, ", next);
		fib1 = fib2;
		fib2 = next;
		i++;
	}
	fib3 = fib1 % 1000000000;
	fib1 = fib1 / 1000000000;
	fib4 = fib2 % 1000000000;
	fib2 = fib2 / 1000000000;
	while (i < 98)
	{
		next = fib1 + fib2;
		next += (fib3 + fib4) / 1000000000;
		next1 = (fib3 + fib4) % 1000000000;
		printf("%ld", next);
		printf("%ld", next1);
		if (i != 97)
			printf(", ");
		fib1 = fib2;
		fib3 = fib4;
		fib2 = next;
		fib4 = next1;
		i++;
	}
	printf("\n");
	return (0);
}
