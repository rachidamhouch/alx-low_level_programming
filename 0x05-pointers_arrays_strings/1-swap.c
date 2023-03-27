/* ******************************************* */
/*                                             */
/*                                             */
/*   1-swap.c                                  */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/03/27 20:35:12 by ramhouch  */
/*   Updated: 2023/03/27 20:37:03 by ramhouch  */
/*                                             */
/* ******************************************* */

# include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: arg 1.
 * @b: arg 2.
 */
void swap_int(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
