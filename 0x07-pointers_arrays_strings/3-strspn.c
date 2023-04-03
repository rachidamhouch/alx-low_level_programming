/* ******************************************* */
/*                                             */
/*                                             */
/*   3-strspn.c                                */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/04/03 22:26:09 by ramhouch  */
/*   Updated: 2023/04/03 23:28:42 by ramhouch  */
/*                                             */
/* ******************************************* */

#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: Arg 1.
 * @accept: Arg 2.
 * Return: Returns the number of bytes in the initial segment of
 * which consist only of bytes from accept.
 */
unsigned int	_strspn(char *s, char *accept)
{
	int	i;
	int	j;
	int	f;
	int	flag;

	f = 0;
	i = 0;
	while (s[i])
	{
		flag = 0;
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
			j++;
		}
		if (flag == 0)
			return (f);
		i++;
	}
	return (0);
}
