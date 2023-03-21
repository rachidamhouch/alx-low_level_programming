#include "main.h"
/**
 * fibonacci - fibonacci
 * Return: 0 if the program finish whitout errors
 * @index: First arg.
 */
long	fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (1);
	if (index == 1)
		return (2);
	return (fibonacci(index - 1) + fibonacci(index - 2));
}

/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	int	i;
	while (i < 50)
		printf("%ld\n", fibonacci(i++));
	return (0);
}
