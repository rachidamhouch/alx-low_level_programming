#include "3-calc.h"

/**
 * main - main function,
 * @ac: arg 1.
 * @av: arg 2.
 * Return: 0.
 */
int main(int ac, char **av)
{
	int	a;
	int	b;
	int result;
	int (*func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	func = get_op_func(av[2]);
	if (!func)
	{
		printf("Error\n");
		return (99);
	}
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
