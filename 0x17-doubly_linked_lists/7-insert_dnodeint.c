#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to the pointer to the head node of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be stored in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *curr_ptr = *h;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	curr_ptr = get_dnodeint_at_index(h, idx);

	if (curr_ptr == NULL)
		return (NULL);

	if (curr_ptr->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = curr_ptr->next;
	new->prev = curr_ptr;
	curr_ptr->next->prev = new;
	curr_ptr->next = new;

	return (new);
}

/**
 * get_dnodeint_at_index - returns a piinter to the node at a given position
 *
 * @head: pointer to the head node of the list
 * @idx: index of the node to return
 *
 * Return: address of the corresponding node, or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int idx)
{
	unsigned int i;

	for (i = 0; head != NULL && i <= idx; i++)
		head = head->next;

	return (head);
}
