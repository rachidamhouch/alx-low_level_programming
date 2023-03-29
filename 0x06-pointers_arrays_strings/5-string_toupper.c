/* ******************************************* */
/*                                             */
/*                                             */
/*   5-string_toupper.c                        */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/03/29 21:01:28 by ramhouch  */
/*   Updated: 2023/03/29 21:06:08 by ramhouch  */
/*                                             */
/* ******************************************* */

# include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase.
 * @a: Arg 1.
 * Return: A pointer to the resulting string.
 */
char	*string_toupper(char *a)
{
	char	*n;

	n = a;
	while (*a)
	{
		if (*a >= 'a' && *a <= 'z')
			*a = *a - ('a' - 'A');
		a++;
	}
	return (n);
}
