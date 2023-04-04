#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: a reference to head node
 * @n: the data of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: reference to the head node
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current_node = *head, *new_node;

	if (!(*head) && idx > 0)
		return (NULL);

	if (!(*head) && idx == 0)
		return (add_nodeint(head, n));

	for (i = 0; i < idx - 1; i++)
	{
		current_node = current_node->next;
		if (!current_node)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
