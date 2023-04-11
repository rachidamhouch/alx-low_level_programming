#include "main.h"

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: Arg 1.
 * Return: Returns a pointer to the array.
 */
char	*_strdup(char *str)
{
	char	*str1;
	size_t	i;

	if (!str)
		return (0);
	str1 = malloc(strlen(str) + 1);
	i = 0;
	if (!str1)
		return (0);
	while (i < strlen(str))
	{
		str1[i] = str[i];
		i++;
	}
	str1[strlen(str)] = '\0';
	return (str1);
}

/**
 * str_concat - function that concatenates two strings.
 * @s1: Arg 1.
 * @s2: Arg 1.
 * Return: Returns a pointer to the array.
 */
char	*strjoin(char *s1, char *s2, int	i)
{
	char	*str;
	int		j;
	size_t	i;
	size_t	t;

	if (!s1)
		s1 = _strdup("");
	str = malloc(strlen(s1) + strlen(s2) + 1);
	i = 0;
	t = 0;
	if (!str)
		return (0);
	while (1)
	{
		if (i == j)
			break;
		if (s1[t] == '\n')
			j++;
		str[i] = s1[t];
		i++;
		t++;
	}
	t = 0;
	while (t < strlen(s2))
	{
		str[i] = s2[t];
		i++;
		t++;
	}
	str[strlen(s1) + strlen(s2)] = '\n';
	free(s1);
	return (str);
}

/**
 * argstostr - function that concatenates two strings.
 * @ac: Arg 1.
 * @av: Arg 1.
 * Return: Returns a pointer to the array.
 */
char	*argstostr(int ac, char **av)
{
	char	*str;
	int		i;

	str = 0;
	i = 0;
	while (i < ac)
		str = strjoin(str, av[i++], i);
	return (str);
}
