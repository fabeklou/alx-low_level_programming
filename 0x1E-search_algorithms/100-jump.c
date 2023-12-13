#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index of the value in the array, or -1
 * if the value is not present in the array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t back = 0, position = 0, step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (position < size && array[position] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", position, array[position]);

		back = position;
		position += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", back, position);

	while (back <= position && back <= size - 1)
	{
		printf("Value checked array[%ld] = [%d]\n", back, array[back]);
		if (array[back] == value)
			return (back);
		if (array[back] > value)
			return (-1);
		back++;
	}

	return (-1);
}
