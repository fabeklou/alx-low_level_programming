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
	size_t position = 0, back = 0, step = sqrt(size);

	if (array == NULL)
		return (-1);

	while (!back)
	{
		if (value <= array[position] || position >= size)
		{
			back = position == 0 ? position : position - step;
			printf("Value found between indexes [%ld] and [%ld]\n", back, position);

			while (back <= position)
			{
				if (back > size - 1)
					return (-1);

				printf("Value checked array[%ld] = [%d]\n", back, array[back]);
				if (value == array[back])
					return (back);
				if (value < array[back])
					return (-1);
				back++;
			}

		}
		printf("Value checked array[%ld] = [%d]\n", position, array[position]);
		position += step;
	}

	return (-1);
}
