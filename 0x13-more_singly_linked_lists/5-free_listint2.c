#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: reference to the head node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (!head)
		return;

	while (*head)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

	head = NULL;
}
