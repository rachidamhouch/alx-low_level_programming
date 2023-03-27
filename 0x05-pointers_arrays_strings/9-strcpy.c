/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9-strcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 22:04:23 by ramhouch          #+#    #+#             */
/*   Updated: 2023/03/27 22:06:52 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @a: dest 1.
 * @n: src 2.
 */
char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
		dest[i] = src[i++];
	dest[i] = '\0';
	return (dest);
}
