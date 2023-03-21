#include "main.h"
/**
 * fibonacci - fibonacci
 * Return: 0 if the program finish whitout errors
 * @index: First arg.
 */
int	fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (fibonacci(index - 1) + fibonacci(index - 2));
}

/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	printf("%d\n", fibonacci(0));
	return (0);
}
