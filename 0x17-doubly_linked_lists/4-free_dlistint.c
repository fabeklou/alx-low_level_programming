#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: pointer to the head node of the list to free
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
