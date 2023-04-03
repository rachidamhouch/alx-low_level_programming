/* ******************************************* */
/*                                             */
/*                                             */
/*   1-memcpy.c                                */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/04/03 22:12:22 by ramhouch  */
/*   Updated: 2023/04/03 22:15:26 by ramhouch  */
/*                                             */
/* ******************************************* */

#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @dest: Arg 1.
 * @src: Arg 2.
 * @n: Arg 2.
 * Return: A pointer to the resulting string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (n)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
