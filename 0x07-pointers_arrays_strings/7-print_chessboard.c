/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7-print_chessboard.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:52:43 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/03 23:57:58 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

/**
 * _strstr - function that prints the chessboard.
 * @a: Arg 1.
 */
void print_chessboard(char (*a)[8])
{
	int	i;
	int	j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
