#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: Arg 1.
 * @s2: Arg 1.
 * Return: Returns a pointer to the array.
 */
char	*str_concat(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	t;

	if (!s1)
		return (strdup(s2));
	str = malloc(strlen(s1) + strlen(s2) + 1);
	i = 0;
	t = 0;
	if (!str)
		return (0);
	while (t < strlen(s1))
	{
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
	str[strlen(s1) + strlen(s2)] = '\0';
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
	{
		str = str_concat(str, av[i]);
		str = str_concat(str, "\n");
		i++;
	}
	return (str);
}
