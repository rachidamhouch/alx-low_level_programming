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

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (f);
	}
	return (0);
}
