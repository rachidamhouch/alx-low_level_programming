#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: Arg 1.
 * @src: Arg 2.
 * Return: A pointer to the resulting string.
 */
char	*_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i])
		i++;
	while (src[y])
		dest[i++] = src[y++];
	dest[i] = '\n';
	dest[i + 1] = '\0';
	return (dest);
}

/**
 * argstostr - function that concatenates two strings.
 * @ac: Arg 1.
 * @av: Arg 1.
 * Return: Returns a pointer to the array.
 */
char	*argstostr(int ac, char **av)
{
	char		*str;
	int			i;
	size_t		len;

	i = 0;
	len = 0;
	if (ac <= 0 || !av)
		return (NULL);
	while (i < ac)
		len += strlen(av[i++]) + 1;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < ac)
		_strcat(str, av[i++]);
	str[len] = '\0';
	return (str);
}
