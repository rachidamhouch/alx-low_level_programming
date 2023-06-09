/* ********************************************/
/*                                            */
/*                                            */
/*   100-atoi.c                               */
/*                                            */
/*   By: ramhouch <ramhouch@student.42.fr>    */
/*                                            */
/*   Created: 2023/03/27 22:11:37 by ramhouch */
/*   Updated: 2023/03/27 22:40:50 by ramhouch */
/*                                            */
/* ********************************************/

# include "main.h"

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
