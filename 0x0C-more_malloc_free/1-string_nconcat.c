#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: Arg 1.
 * @s2: arg 2.
 * @n: arg 3.
 * Return: Returns a pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char			*s;
	unsigned int	i;
	unsigned int	j;
	unsigned int	len1;
	unsigned int	len2;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		len2 = n;
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	while (i < (len1 + len2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
