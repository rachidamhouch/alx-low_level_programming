#include "main.h"

/**
 * free_grid -  function that free grid.
 * @grid: Arg 1.
 * @size: Arg 2.
 */
void free_grid(int **grid, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(grid[i++]);
}

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
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	i = 0;
	while (i < height)
	{
		grid[i] = calloc(sizeof(int), width);
		if (!grid[i])
		{
			free_grid(grid, i);
			free(grid);
			return (NULL);
		}
		i++;
	}
	return (grid);
}
