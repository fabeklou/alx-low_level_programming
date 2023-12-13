#include "search_algos.h"
#include "search_algos.h"

/**
 * recursive_bs - recursivly search for value in the half of the array
 *
 * @array: a pointer to the first element of the array to search in
 * @left: beginning of the sub array
 * @right: end of the sub array
 * @value: the value to search for
 *
 * Return: the index of value or -1
 */
int recursive_bs(int *array, size_t left, size_t right, int value)
{
	size_t idx;
	size_t mid = left == right ? left : left + (right - left) / 2;

	if (left > right)
		return (-1);

	printf("Searching in array:");
	for (idx = left; idx <= right; idx++)
	{
		printf(" %d", array[idx]);
		if (idx != right)
			printf(",");
	}
	printf("\n");

	if (value == array[mid])
		return (mid);
	else if (value < array[mid])
		return (recursive_bs(array, left, mid - 1, value));
	else
		return (recursive_bs(array, mid + 1, right, value));

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index of the value in the array, or -1
 * if the value is not present in the array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t right, bound = 1;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	right = (bound > size - 1) ? size - 1 : bound;
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, right);

	return (recursive_bs(array, bound / 2, right, value));
}
