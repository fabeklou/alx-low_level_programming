#include <stdlib.h>

/**
 * int_index - searches for an integer
 *
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used
 * to compare values
 *
 * Return: Index of the first element for which
 * the @cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) == 1)
				return (i);

		return (-1);
	}
	return (0);
}
