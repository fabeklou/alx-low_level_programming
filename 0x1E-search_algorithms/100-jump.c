#include "search_algos.h"

/**
 * search_in_subarray - search the target value in a range
 *
 * @array: a pointer to the first element of the array to search in
 * @left: index of the left most element of the subarray
 * @right: index of the right most element of the subarray
 * @value: the value to search for
 *
 * Return: the index where @value is located or -1 if @value
 * is not present in the subarray
 */
int search_in_subarray(int *array, size_t left, size_t right, int value)
{
	while (left <= right)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		if (value == array[left])
			return (left);
		left += 1;
	}

	return (-1);
}

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where @value is located or -1 if @value
 * is not present in array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0;
	size_t step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (left < size)
	{

		if (right >= size || value <= array[right])
		{
			printf("Value found between indexes[%ld] and[%ld]\n", left, right);
			if (right < size)
				return (search_in_subarray(array, left, right, value));
			else
				return (search_in_subarray(array, left, size - 1, value));
		}

		printf("Value checked array[%ld] = [%d]\n", right, array[right]);

		left = right;
		right += step;
	}

	return (-1);
}
