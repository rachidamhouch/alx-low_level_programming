#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _atoi - function that convert a string to an integer.
 * @s: arg 1.
 * Return: an integer.
 */
int _atoi(char *s)
{
	unsigned int	n;
	int				sign;
	int				i;

	n = 0;
	i = 0;
	sign = 0;
	while (s[i] && (s[i] == '+' || s[i] == '-' || s[i] == ' ' || s[i] == '\t'))
	{
		if (s[i] == '-')
			sign++;
		i++;
	}
	while (s[i] && (s[i] < '0' || s[i] > '9'))
		i++;
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		n *= 10;
		n += s[i] - '0';
		i++;
	}
	if (sign % 2 == 0)
		return (n);
	return (-n);
}

/**
 * main - main function.
 * @ac: arg 1.
 * @av: arg 1.
 * Return: 0 if the program finish whitout errors.
 */
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", _atoi(av[1]) * _atoi(av[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
