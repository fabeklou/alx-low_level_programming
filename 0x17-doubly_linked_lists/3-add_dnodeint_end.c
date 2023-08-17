#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: pointer to the pointer to the head node of the list
 * @n: data to be saved in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = *head;

	new = malloc(sizeof(dlistint_t));

	if (head == NULL || new == NULL)
		return (NULL);

	while (current)
	{
		if (current->next == NULL)
			break;
		current = current->next;
	}

	new->n = n;
	new->next = NULL;
	new->prev = current;

	if (current)
		current->next = new;
	else
		*head = new;

	return (new);
}
