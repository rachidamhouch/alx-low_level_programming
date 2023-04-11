#include "main.h"

/**
 * free_grid -  function that frees a 2 dimensional grid.
 * @grid: Arg 1.
 * @height: Arg 2.
 */
void	free_grid(int **grid, int height)
{
	int	i;

	i = 0;
	while (i < height)
		free(grid[i++]);
	free(grid);
}
