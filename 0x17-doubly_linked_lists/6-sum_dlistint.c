#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a
 * dlistint_t linked list
 *
 * @head: pinter to the head of the node
 *
 * Return: sum of all the data of the list, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
