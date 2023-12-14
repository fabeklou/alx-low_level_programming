#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index of the value in the array, or -1
 * if the value is not present in the array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	pos = low + (((double)(high - low) /
				  (array[high] - array[low])) *
				 (value - array[low]));

	while ((array[low] < array[high]) &&
				(array[low] <= value) &&
				(array[high] >= value))
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (value == array[pos])
			return (pos);
		else if (value > array[pos])
			low = pos + 1;
		else
			high = pos - 1;

		pos = low + (((double)(high - low) /
					  (array[high] - array[low])) *
					 (value - array[low]));
	}

	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}

	if (pos >= size)
		printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}
