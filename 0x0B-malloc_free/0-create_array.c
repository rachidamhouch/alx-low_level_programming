#include "main.h"

/**
 * create_array - function that creates an array of
 * chars, and initializes it with a specific char.
 * @size: Arg 1.
 * @c: arg 2.
 * Return: Returns a pointer to the array,
 * or NULL if it fails.
 */
char	*create_array(unsigned int size, char c)
{
	char				*str;
	unsigned int		i;

	if (!size)
		return (0);
	str = malloc(size);
	i = 0;
	if (!str)
		return (0);
	while (i < size)
		str[i++] = c;
	return (str);
}
