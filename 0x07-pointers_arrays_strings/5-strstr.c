/* ******************************************* */
/*                                             */
/*                                             */
/*   5-strstr.c                                */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/04/03 23:40:00 by ramhouch  */
/*   Updated: 2023/04/03 23:42:13 by ramhouch  */
/*                                             */
/* ******************************************* */

#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: Arg 1.
 * @needle: Arg 2.
 * Return: A pointer to the resulting string.
 */
char	*_strstr(char *haystack, char *needle)
{
	size_t	lenn;
	size_t	i;

	i = 0;
	lenn = 0;
	lenn = ft_strlen(needle);
	if (!lenn)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
			if (ft_strncmp(haystack + i, needle, lenn) == 0)
				return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
	return (0);
}