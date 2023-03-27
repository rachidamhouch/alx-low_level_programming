/* ********************************************/
/*                                            */
/*                                            */
/*   6-puts2.c                                */
/*                                            */
/*   By: ramhouch <ramhouch@student.42.fr>    */
/*                                            */
/*   Created: 2023/03/27 21:39:20 by ramhouch */
/*   Updated: 2023/03/27 21:41:43 by ramhouch */
/*                                            */
/* ********************************************/

# include "main.h"


/**
 * puts2 - function that prints every other
 * character of a string,starting with the
 * first character, followed by a new line.
 * @str: arg 1.
 */
void	puts2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			write(1, str + i, 1);
		i++;
	}
	write(1, "\n", 1);
}
