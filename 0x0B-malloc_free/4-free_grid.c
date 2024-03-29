#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: pointer to the 2D grid to free
 * @height: size of the second dimension
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	for (height -= 1; height >= 0; height--)
		free(grid[height]);

	free(grid);
}
