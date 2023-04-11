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
