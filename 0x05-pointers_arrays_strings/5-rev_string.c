/* ******************************************* */
/*                                             */
/*                                             */
/*   5-rev_string.c                            */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/03/27 20:56:37 by ramhouch  */
/*   Updated: 2023/03/27 21:02:16 by ramhouch  */
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
 * swap_char - function that swaps the values of two integers.
 * @a: arg 1.
 * @b: arg 2.
 */
void swap_char(char *a, char *b)
{
	char	i;

	i = *a;
	*a = *b;
	*b = i;
}

/**
 * rev_string - function that reverses a string.
 * @s: arg 1.
 */
void rev_string(char *s)
{
	int	i;
	int	j;

	i = _strlen(s) - 1;
	j = 0;
	while (j < _strlen(s) / 2)
	{
		swap_char(s + j, s + i);
		j++;
		i--;
	}
}
