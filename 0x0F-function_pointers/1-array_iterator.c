#include <stdlib.h>

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 *
 * @array: pointer to the array
 * @size: size of the array
 * @action: callback function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL && size > 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
