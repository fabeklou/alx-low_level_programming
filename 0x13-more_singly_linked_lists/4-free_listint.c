#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to the head node
 *
 * Return:  nothing
 */
void free_listint(listint_t *head)
{
	listint_t *next_node = head;

	if (!head)
		exit(0);

	while (next_node->next)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}

	free(next_node);
}
