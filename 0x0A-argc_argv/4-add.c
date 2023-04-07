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
 * _isnum - function that checks if is num.
 * @str: first arg.
 * Return: Returns 1 if is num.
 */
int _isnum(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
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
		if (_atoi(av[i]) > 0)
			sum += _atoi(av[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
