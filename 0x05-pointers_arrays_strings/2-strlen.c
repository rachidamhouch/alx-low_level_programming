/* ******************************************* */
/*                                             */
/*                                             */
/*   2-strlen.c                                */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/03/27 20:38:34 by ramhouch  */
/*   Updated: 2023/03/27 20:40:05 by ramhouch  */
/*                                             */
/* ******************************************* */

# include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: arg 1.
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (0);
}
