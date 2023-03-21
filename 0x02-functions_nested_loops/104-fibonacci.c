#include "main.h"
/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	int			i;
	unsigned long int	fib1;
	unsigned long int	fib2;
	unsigned long int	next;

	fib1 = 1;
	fib2 = 2;
	i = 2;
	printf("%ld, %ld, ", fib1, fib2);
	while (i < 98)
	{
		next = fib1 + fib2;
		printf("%ld", next);
		if (i != 49)
			printf(", ");
		fib1 = fib2;
		fib2 = next;
		i++;
	}
	printf("\n");
	return (0);
}
