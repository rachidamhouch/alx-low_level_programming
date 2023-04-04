/* ******************************************* */
/*                                             */
/*                                             */
/*   100-set_string.c                          */
/*                                             */
/*   By: ramhouch <ramhouch@student.42.fr>     */
/*                                             */
/*   Created: 2023/04/04 12:15:37 by ramhouch  */
/*   Updated: 2023/04/04 12:17:04 by ramhouch  */
/*                                             */
/* ******************************************* */

#include "main.h"

/**
 * set_string - function that sets the value of
 * a pointer to a char.
 * @s: Arg 1.
 * @to: Arg 2.
 */
void	set_string(char **s, char *to)
{
	*s = to;
}
