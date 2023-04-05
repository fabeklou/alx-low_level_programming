#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: reference to head node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node = NULL;

	if (!head || !(*head))
		return (NULL);

	if (!((*head)->next))
		return (*head);

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = (*head);
		(*head) = next_node;
	}

	*head = prev_node;

	return (*head);
}
