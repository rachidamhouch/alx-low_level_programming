/* ******************************************* */
/*                                             */
/*                                             */
/*   3-strcmp.c                                */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/03/29 20:53:39 by ramhouch  */
/*   Updated: 2023/03/29 20:56:13 by ramhouch  */
/*                                             */
/* ******************************************* */

# include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: Arg 1.
 * @s2: Arg 2.
 * Return: s1 - s2
 */
int	_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
