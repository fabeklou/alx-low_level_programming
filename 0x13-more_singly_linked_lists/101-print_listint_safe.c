#include "lists.h"
#include <stdio.h>

/**
 * find_looped_len - search for a possible loop in a single
 * linked list and return the length if found
 *
 * @head: pointer to the head node
 *
 * Return: number of nodes if looped, 0 otherwise
 */
size_t find_looped_len(const listint_t *head)
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
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: pointer to the head node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0, valid_nodes;

	if (!head)
		return (0);

	node_count = find_looped_len(head);

	if (node_count)
	{
		for (valid_nodes = 0; valid_nodes < node_count; valid_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	else
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			node_count++;
		}
	}
	return (node_count);
}
