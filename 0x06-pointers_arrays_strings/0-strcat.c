/* ******************************************* */
/*                                             */
/*                                             */
/*   0-strcat.c                                */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/03/29 20:27:56 by ramhouch  */
/*   Updated: 2023/03/29 20:31:04 by ramhouch  */
/*                                             */
/* ******************************************* */

# include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: Arg 1.
 * @src: Arg 2.
 * Return: A pointer to the resulting string.
 */
char	*_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i])
		i++;
	while (src[y])
		dest[i++] = src[y++];
	dest[i] = '\0';
	return (dest);
}
