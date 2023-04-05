#include "lists.h"

/**
 * delete_head_node - deletes the head node and
 * return 1
 *
 * @head: reference to the head node
 *
 * Return: always 1 (Success)
 */
int delete_head_node(listint_t **head)
{
	listint_t *prev_head = *head;

	*head = (*head)->next;
	free(prev_head);

	return (1);
}

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 *
 * @head: reference to the head node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev_node, *del_node;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
		return (delete_head_node(head));

	prev_node = *head;

	for (i = 0; i < index - 1; i++)
	{
		prev_node = prev_node->next;

		if (!prev_node)
			return (-1);
	}

	del_node = prev_node->next;
	prev_node->next = del_node->next;
	free(del_node);

	return (1);
}
