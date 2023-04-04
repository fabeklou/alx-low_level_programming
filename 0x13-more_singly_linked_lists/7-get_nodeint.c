#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer to the head node
 * @index: index of the node
 *
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nth_node = head;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		nth_node = nth_node->next;
		if (!nth_node)
			return (NULL);
	}

	return (nth_node);
}
