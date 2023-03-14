#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: pointer to the 2D grid
 * @height: size of the second dimension
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		exit(EXIT_SUCCESS);
	}
	else
	{
		for (; height >= 0; --height)
			free(grid[height]);

		free(grid);
	}
}
