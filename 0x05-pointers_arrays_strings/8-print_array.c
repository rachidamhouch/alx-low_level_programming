/* ******************************************* */
/*                                             */
/*                                             */
/*   8-print_array.c                           */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/03/27 21:58:16 by ramhouch  */
/*   Updated: 2023/03/27 22:02:44 by ramhouch  */
/*                                             */
/* ******************************************* */

# include "main.h"

/**
 * print_array - function that prints n elements of an array of integers.
 * @a: arg 1.
 * @n: arg 2.
 */
void	print_array(int *a, int n)
{
	int	i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			printf("%d", a[i]);
			i++;
			if (i != n)
				printf(", ");
		}
	}
	printf("\n");
}
