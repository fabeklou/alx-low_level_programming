#include "lists.h"

/**
 * find_looped_size - search for a possible loop in a single
 * linked list and return the length if found
 *
 * @head: pointer to the head node
 *
 * Return: number of nodes if looped, 0 otherwise
 */
size_t find_looped_size(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *walking_ptr = head, *jumping_ptr = head;

	if (!head || !(head->next))
		return (0);

	while (walking_ptr && jumping_ptr && jumping_ptr->next)
	{
		walking_ptr = walking_ptr->next;
		jumping_ptr = jumping_ptr->next->next;

		node_count++;

		if (walking_ptr == jumping_ptr)
		{
			while (walking_ptr != head)
			{
				walking_ptr = walking_ptr->next;
				head = head->next;

				node_count++;
			}
			return (node_count);
		}
	}
	return (0);
}

/**
 * free_listint_safe - frees a listint_t list
 *
 * @h: reference to the head node
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0, valid_node;
	listint_t *current_node = *h, *temp_node = *h;

	node_count = find_looped_size(*h);
	
	*h = NULL;

	if (node_count)
	{
		for (valid_node = 0; valid_node < node_count; valid_node++)
		{
			temp_node = current_node->next;
			free(current_node);
			current_node = temp_node;
		}
	}
	else
	{
		for (; current_node; node_count++)
		{
			temp_node = current_node->next;
			free(current_node);
			current_node = temp_node;
		}
	}
	h = NULL;
	return (node_count);
}
