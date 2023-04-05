#include "lists.h"
#include <stdio.h>

/**
 * find_starting_point - finds and returns a pointer to the
 * node at the origin of the loop
 *
 * @head: pointer to the head node
 * @p: pointer to the position node
 *
 * Return: a pointer to the node at the origin of the loop
 */
const listint_t *find_starting_point(const listint_t *p, const listint_t *head)
{
	const listint_t *q = head;

	while (p != q)
	{
		p = p->next;
		q = q->next;
	}

	return (q);
}

/**
 * find_loop - search for a possible loop in a single
 * linked list
 *
 * @head: pointer to the head node
 *
 * Return: pointer to a valid node if a loop was found,
 * NULL otherwise
 */
const listint_t *find_loop(const listint_t *head)
{
	const listint_t *walking_ptr = head, *jumping_ptr = head;

	while (walking_ptr && jumping_ptr && jumping_ptr->next)
	{
		walking_ptr = walking_ptr->next;
		jumping_ptr = jumping_ptr->next->next;

		if (walking_ptr == jumping_ptr)
			return (find_starting_point(walking_ptr, head));
	}

	return (NULL);
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
	size_t node_count = 0, st_point_found = 0;
	const listint_t *starting_point;

	if (!head)
		return (0);

	starting_point = find_loop(head);

	if (starting_point)
	{
		while (st_point_found < 2)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			node_count++;
			head = head->next;
			if (head == starting_point)
			{
				st_point_found++;
				if (st_point_found == 2)
					printf("-> [%p] %d\n", (void *)head, head->n);
			}
		}
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
