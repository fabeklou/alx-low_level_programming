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

	while (next_node)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
