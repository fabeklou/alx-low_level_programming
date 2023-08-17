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
	unsigned int count = 0;
	dlistint_t *new = NULL;
	dlistint_t *curr_ptr = *h;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (curr_ptr)
	{
		curr_ptr = curr_ptr->next;
		count++;
		if (count == idx - 1)
		{
			new->n = n;
			new->prev = curr_ptr;
			new->next = curr_ptr->next;
			if (curr_ptr->next)
				(curr_ptr->next)->prev = new;
			curr_ptr->next = new;
		}
	}

	return (NULL);
}
