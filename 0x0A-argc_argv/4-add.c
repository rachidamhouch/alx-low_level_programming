#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * _isnum - function that checks if is num.
 * @c: first arg.
 * Return: Returns 1 if is num.
 */
int _isnum(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - main function.
 * @ac: arg 1.
 * @av: arg 1.
 * Return: 0 if the program finish whitout errors.
 */
int	main(int ac, char **av)
{
	int	i;
	int	sum;

	i = 1;
	sum = 0;
	while (i < ac)
	{
		if (!_isnum(av[i]))
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(av[i]) > 0)
			sum += atoi(av[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
