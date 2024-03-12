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
 * recursive_binary_search - searches for a value in a sorted array of integers
 * using a recursive Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @left: left most index of the array where value should be search in
 * @right: right most index of the array where value should be search in
 * @value: the value to search for
 *
 * Return: the first index where @value is located or -1 if @value
 * is not present in array
 */
int recursive_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid = (left + right) / 2;

	if (left > right)
		return (-1);

	print_subarray(array, left, right);

	if (value < array[mid])
		right = mid - 1;
	else if (value > array[mid])
		left = mid + 1;
	else if (value == array[mid] && mid > 0 && value == array[mid - 1])
		right = mid;
	else
		return (mid);

	return (recursive_binary_search(array, left, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using a modified version of the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where @value is located or -1 if @value
 * is not present in array
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary_search(array, left, right, value));
}
