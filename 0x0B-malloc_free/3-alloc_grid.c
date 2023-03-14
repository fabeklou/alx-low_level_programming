#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: size of the second dimension
 * @height: size of the first dimension
 *
 * Return: a pointer to inetger
 */
int **alloc_grid(int width, int height)
{
	int  i, j;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		grid[i] = (int *)malloc(width * sizeof(int));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;


	return (grid);
}
