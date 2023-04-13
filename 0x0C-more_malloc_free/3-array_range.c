#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: Arg 1.
 * @max: arg 2.
 * Return: Returns a pointer to the allocated memory.
 */
int	*array_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min > max)
		return (0);
	tab = malloc(sizeof(int) * (max - min + 1));
	i = 0;
	if (!tab)
		return (0);
	while (min <= max)
		tab[i++] = min++;
	return (tab);
}
