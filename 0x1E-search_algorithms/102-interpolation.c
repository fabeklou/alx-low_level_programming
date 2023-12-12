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
	size_t pos, lo = 0, hi = size - 1;

	if (array == NULL)
		return (-1);

	pos = lo + ((float)(hi - lo) * (value - array[lo]) /
				(array[hi] - array[lo]));

	while (array[lo] != array[hi] && array[lo] <= value && array[hi] >= value)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (value == array[pos])
			return (pos);
		else if (value > array[pos])
			lo = pos + 1;
		else
			hi = pos - 1;

		pos = lo + ((float)(hi - lo) * (value - array[lo]) /
					(array[hi] - array[lo]));
	}
	if (value == array[lo])
		return (lo);

	if (pos > size)
		printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}
