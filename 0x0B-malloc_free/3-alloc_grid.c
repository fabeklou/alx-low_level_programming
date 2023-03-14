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
	int **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int *)calloc(height, (int *)calloc(width, sizeof(int)));

	if (grid == NULL)
		return (NULL);

	return (grid);
}
