#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of
 * a dlistint_t linked list
 *
 * @head: pointer to pointer to the head node
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr_ptr;
	const int SUCCESS = 1, FAILURE = -1;

	if (head == NULL || *head == NULL)
		return (FAILURE);

	if (index == 0)
		return (delete_dnodeint(head));

	curr_ptr = get_dnodeint_at_index(*head, index);

	if (curr_ptr == NULL)
		return (FAILURE);

	if (curr_ptr->next == NULL)
		return (delete_dnodeint_at_end(curr_ptr));

	curr_ptr->prev->next = curr_ptr->next;
	curr_ptr->next->prev = curr_ptr->prev;

	free(curr_ptr);

	return (SUCCESS);
}

/**
 * delete_dnodeint - deletes the first node of a list
 *
 * @head: pointer to pointer to the head node
 *
 * Return: always 1 for success
 */
int delete_dnodeint(dlistint_t **head)
{
	dlistint_t *nxt_ptr;

	nxt_ptr = (*head)->next;
	if (nxt_ptr)
		nxt_ptr->prev = NULL;
	free(*head);
	*head = nxt_ptr;

	return (1);
}

/**
 * delete_dnodeint_at_end - deletes the last node of a list
 *
 * @tail: pointer to the last node
 *
 * Return: always 1 for success
 */
int delete_dnodeint_at_end(dlistint_t *tail)
{
	dlistint_t *prev_ptr;

	prev_ptr = tail->prev;
	if (prev_ptr)
		prev_ptr->next = NULL;
	free(tail);

	return (1);
}

/**
 * get_dnodeint_at_index - returns a pointer corresponding to the
 * given index
 *
 * @head: pointer to pointer to the head node
 * @idx: index of the pointer  to return
 *
 * Return: the corresponding pointer or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int idx)
{
	unsigned int i;

	for (i = 0; head != NULL && i < idx; i++)
		head = head->next;

	return (head);
}
