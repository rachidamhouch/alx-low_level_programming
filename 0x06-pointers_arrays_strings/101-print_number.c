/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   101-print_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:27:50 by ramhouch          #+#    #+#             */
/*   Updated: 2023/03/29 22:29:34 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

/**
 * print_number - prints numbers
 * @n: first parameter
 */
void	print_number(int n)
{
	unsigned int	nb;

	nb = 0;
	if (n < 0)
	{
		_putchar('-');
		nb = -n;
	}
	else
		nb = n;
	if (nb < 10)
		_putchar(nb + '0');
	else
	{
		print_number(nb / 10);
		print_number(nb % 10);
	}
}
