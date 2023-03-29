/* ****************************************** */
/*                                            */
/*                                            */
/*   6-cap_string.c                           */
/*                                            */
/*   By: ramhouch <ramhouch@student.42.fr>    */
/*                                            */
/*   Created: 2023/03/29 21:15:07 by ramhouch */
/*   Updated: 2023/03/29 21:33:29 by ramhouch */
/*                                            */
/* ****************************************** */

# include "main.h"

/**
 * is_sep - check if is Separator.
 * @s: Arg 1.
 * Return: 1 if is Separator and 0 if is not.
 */
int	is_sep(char	s)
{
	char	*sep;
	int		i;

	sep = "\n\t ,;.!?(){}";
	i = 0;
	while (sep[i])
	{
		if (sep[i] == s)
			return (1);
		i++;
	}
	return (0);
}
/**
 * cap_string - function that capitalizes all words of a string.
 * @str: Arg 1.
 * Return: A pointer to the resulting string.
 */
char	*cap_string(char *str)
{
	int	i;
	int	capitalizes;

	i = 0;
	capitalizes = 1;
	while (str[i])
	{
		if (is_sep(str[i]))
			capitalizes = 1;
		else if (str[i] >= 'a' && str[i] <= 'z' && capitalizes)
		{
			str[i] -= 'a' - 'A';
			capitalizes = 0;
		}
		else
			capitalizes = 0;
		i++;
	}
	return (str);
}
