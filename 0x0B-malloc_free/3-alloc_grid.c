#include "main.h"

/**
 * alloc_grid -  function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: Arg 1.
 * @height: Arg 2.
 * Return: eturns a pointer to
 * a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int	**grid;
	int	i;

	if (width <= 0 || height <= 0)
		return (0);
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (0);
	i = 0;
	while (i < height)
	{
		grid[i] = calloc(sizeof(int), width);
		if (!grid[i])
			return (0);
		i++;
	}
	return (grid);
}
