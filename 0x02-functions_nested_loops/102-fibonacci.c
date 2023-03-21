#include "main.h"
/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	int			i;
	long int	fib1;
	long int	fib2;
	long int	next;	
	fib1 = 1;
	fib2 = 2;
	printf("%ld, %ld ", fib1, fib2);
	for (i = 3; i <= 50; i++)
	{
	    next = fib1 + fib2;
	    printf("%ld ", next);
		if (i != 50)
			printf(",");
	    fib1 = fib2;
	    fib2 = next;
	}
	printf("\n");
	return 0;
}
