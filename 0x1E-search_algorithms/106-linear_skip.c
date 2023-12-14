#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 *
 * Return: the index of the value in the array, or -1
 * if the value is not present in the array or if array is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = NULL, *stop = NULL;

	if (!list)
		return (NULL);

	temp = list;
	while (temp && temp->express && temp->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
			   temp->express->index, temp->express->n);
		temp = temp->express;
	}

	stop = temp;
	while (stop && stop->next != stop->express)
		stop = stop->next;

	if (temp->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
			   temp->express->index, temp->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
			   temp->index, temp->express->index);
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				temp->index, stop->index);
	}

	while (temp != stop && temp->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n", temp->index, temp->n);
		temp = temp->next;
	}

	printf("Value checked at index [%lu] = [%i]\n", temp->index, temp->n);
	if (temp == stop)
		return (NULL);
	return (temp);
}
