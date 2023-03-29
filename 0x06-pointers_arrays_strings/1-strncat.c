/* ******************************************* */
/*                                             */
/*                                             */
/*   1-strncat.c                               */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/03/29 20:36:30 by ramhouch  */
/*   Updated: 2023/03/29 20:37:21 by ramhouch  */
/*                                             */
/* ******************************************* */

# include "main.h"

/**
 * _strncat - Function that concatenates two strings.
 * @dest: Arg 1.
 * @src: Arg 2.
 * @n: Arg 3.
 * Return: A pointer to the resulting string.
 */
char	*_strncat(char *dest, char *src, int n)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i])
		i++;
	while (src[y] && y < n)
		dest[i++] = src[y++];
	dest[i] = '\0';
	return (dest);
}
