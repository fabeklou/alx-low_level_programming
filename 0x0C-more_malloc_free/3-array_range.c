#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: smallest value in the array
 * @max: highest value in the array
 *
 * Return: a pointer to the newly created array
 * or NULL if it fails
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		p[j++] = i;

	return (p);
}
