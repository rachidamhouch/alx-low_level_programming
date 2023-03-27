/* ******************************************* */
/*                                             */
/*                                             */
/*   3-puts.c                                  */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/03/27 20:46:31 by ramhouch  */
/*   Updated: 2023/03/27 20:48:50 by ramhouch  */
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
	return (i);
}

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: arg 1.
 */
void _puts(char *str)
{
	write(1, str, _strlen(str));
	write(1, "\n", 1);
}
