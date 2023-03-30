#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: pointer to the head of the list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
