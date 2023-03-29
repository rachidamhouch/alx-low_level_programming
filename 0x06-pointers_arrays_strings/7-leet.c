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
 * check - fcheck.
 * @a: Arg 1.
 * @b: Arg 2.
 * Return: 1 if true.
 */
int	check(char	a, char	b)
{
	if (a == b || a == b - ('A' - 'a'))
		return (1);
	return (0);
}

/**
 * leet - function that encodes a string into 1337.
 * @str: Arg 1.
 * Return: A pointer to the resulting string.
 */
char	*leet(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		s[i] = check(s[i], 'a') * '4' + !check(s[i], 'a') * s[i];
		s[i] = check(s[i], 'e') * '3' + !check(s[i], 'e') * s[i];
		s[i] = check(s[i], 'o') * '0' + !check(s[i], 'o') * s[i];
		s[i] = check(s[i], 't') * '7' + !check(s[i], 't') * s[i];
		s[i] = check(s[i], 'l') * '1' + !check(s[i], 'l') * s[i];
		i++;
	}
	return (s);
}
