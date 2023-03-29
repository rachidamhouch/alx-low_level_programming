/* ******************************************* */
/*                                             */
/*                                             */
/*   2-strncpy.c                               */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/03/29 20:39:55 by ramhouch  */
/*   Updated: 2023/03/29 20:41:16 by ramhouch  */
/*                                             */
/* ******************************************* */

# include "main.h"

/**
 * _strncpy - Function that copies a string.
 * @dest: Arg 1.
 * @src: Arg 2.
 * @n: Arg 3.
 * Return: A pointer to the resulting string.
 */
char	*_strncpy(char *dest, char *src, int n)
{
	int	y;

	y = 0;
	while (y < n)
	{
		dest[y] = src[y];
		y++;
	}
	return (dest);
}
