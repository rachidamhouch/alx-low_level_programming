/* ******************************************* */
/*                                             */
/*                                             */
/*   0-memset.c                                */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/04/03 21:53:55 by ramhouch  */
/*   Updated: 2023/04/03 22:06:59 by ramhouch  */
/*                                             */
/* ******************************************* */

/**
 * _memset - function that fills memory with a constant byte.
 * @s: Arg 1.
 * @b: Arg 2.
 * @n: Arg 2.
 * Return: A pointer to the resulting string.
 */
void	*_memset(char *s, char b, unsigned int n)
{
	int	i;

	i = 0;
	while (n)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
