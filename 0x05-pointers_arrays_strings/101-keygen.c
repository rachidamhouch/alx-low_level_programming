/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   101-keygen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 00:13:30 by ramhouch          #+#    #+#             */
/*   Updated: 2023/03/28 00:25:36 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.h"

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
