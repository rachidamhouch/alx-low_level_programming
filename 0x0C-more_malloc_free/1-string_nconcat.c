#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: Arg 1.
 * @s2: arg 2.
 * @n: arg 3.
 * Return: Returns a pointer to the allocated memory.
 */
char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int		len1;
	unsigned int		len2;
	char				*str;
	unsigned int		i;
	unsigned int		j;

	if (!s1 || !s2)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);
	i = 0;
	j = 0;
	if (n < len2)
		len2 = n;
	str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	while (s1[j])
		str[i++] = s1[j++];
	j = 0;
	while (j < len2)
		str[i++] = s1[j++];
	str[i] = '\0';
	return (str);
}
