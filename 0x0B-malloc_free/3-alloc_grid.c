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
	int	j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	i = 0;
	j = 0;
	while (i < height)
	{
		grid[i] = calloc(sizeof(int), width);
		if (!grid[i])
		{
			free(grid);
			while (j < i)
				free(grid[j++]);
			return (NULL);
		}
		i++;
	}
	return (grid);
}
