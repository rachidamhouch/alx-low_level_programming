/* ******************************************* */
/*                                             */
/*                                             */
/*   4-strpbrk.c                               */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/04/03 23:31:43 by ramhouch  */
/*   Updated: 2023/04/03 23:35:13 by ramhouch  */
/*                                             */
/* ******************************************* */

#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: Arg 1.
 * @accept: Arg 2.
 * Return: A pointer to the resulting string.
 */
char *_strpbrk(char *s, char *accept)
{
	int	i;
	int	j;

	i = 0;
	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		s++;
		i++;
	}
	return (0);
}
