/* ******************************************* */
/*                                             */
/*                                             */
/*   7-leet.c                                  */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/03/29 21:41:13 by ramhouch  */
/*   Updated: 2023/03/29 21:56:36 by ramhouch  */
/*                                             */
/* ******************************************* */

# include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: Arg 1.
 * Return: A pointer to the resulting string.
 */
char	*leet(char *s)
{
	char	*a;
	char	*b;
	int		i;
	int		j;

	a = "aAeEoOtTlL";
	b = "4433007711";
	i = 0;
	while (s[i])
	{
		j = 0;
		while (a[j])
		{
			if (s[i] == a[j])
				s[i] = b[j];
			j++;
		}
		i++;
	}
	return (s);
}
