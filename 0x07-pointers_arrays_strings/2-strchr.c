/* ******************************************* */
/*                                             */
/*                                             */
/*   2-strchr.c                                */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/04/03 22:16:46 by ramhouch  */
/*   Updated: 2023/04/03 22:18:29 by ramhouch  */
/*                                             */
/* ******************************************* */

#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s: Arg 1.
 * @c: Arg 2.
 * Return: A pointer to the resulting string.
 */
char	*_strchr(char *s, char c)
{
	char	*n;

	n = (char *)s;
	while (*n)
	{
		if (*n == (char) c)
			return (n);
		n++;
	}
	if (*n == (char) c)
		return (n);
	return (NULL);
}
