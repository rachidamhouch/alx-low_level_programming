#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: Arg 1.
 * @s2: Arg 1.
 * Return: Returns a pointer to the array.
 */
char	*str_concat(char *s1, char *s2)
{
	char	*str1;
	size_t	i;
	size_t	t;

	if (!s1 && !s2)
		return (0);
	str1 = malloc(strlen(s1) + strlen(s2) + 1);
	i = 0;
	t = 0;
	if (!str1)
		return (0);
	while (t < strlen(s1))
	{
		str1[i] = s1[t];
		i++;
		t++;
	}
	t = 0;
	while (t < strlen(s2))
	{
		str1[i] = s2[t];
		i++;
		t++;
	}
	str1[strlen(s1) + strlen(s2)] = '\0';
	return (str1);
}
