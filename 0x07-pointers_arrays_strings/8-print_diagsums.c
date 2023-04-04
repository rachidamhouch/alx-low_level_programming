/* ******************************************* */
/*                                             */
/*                                             */
/*   8-print_diagsums.c                        */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/04/04 00:03:10 by ramhouch  */
/*   Updated: 2023/04/04 00:13:56 by ramhouch  */
/*                                             */
/* ******************************************* */

#include "main.h"

/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: Arg 1.
 * @size: Arg 2.
 */
void	print_diagsums(int *a, int size)
{
	int	i;
	int	sum;
	int	s;

	sum = 0;
	i = 0;
	s = size;
	while (i < s)
	{
		sum += a[i * s + i];
		i++;
	}
	printf("%d, ", sum);
	sum = 0;
	i = 0;
	while (i < s)
	{
		sum += a[(i * s) + size - 1];
		size--;
		i++;
	}
	printf("%d\n", sum);
}
