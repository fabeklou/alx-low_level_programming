#include "search_algos.h"

/**
 * print_subarray - prints the array being searched
 *
 * @array: a pointer to the first element of the original array
 * @left: index of the left most element of the subarray to print
 * @right: index of the right most element of the subarray to print
 *
 * Return: Nothing
 */
void print_subarray(int *array, size_t left, size_t right)
{
	printf("Searching in array:");

	while (left <= right)
	{
		printf(" %d", array[left]);
		if (left != right)
			printf(",");
		left++;
	}
	printf("\n");
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where @value is located or -1 if @value
 * is not present in array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left, mid, right, bound = 1;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && value > array[bound])
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound >= size) ? size - 1 : bound;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	while (left <= right)
	{
		print_subarray(array, left, right);
		mid = (left + right) / 2;

		if (value < array[mid])
			right = mid - 1;
		else if (value > array[mid])
			left = mid + 1;
		else
			return (mid);
	}

	return (-1);
}
