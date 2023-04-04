#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 *
 * @head: reference to the head node
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *prev_head;
	int data;

	if (!(*head))
		return (0);

	data = (*head)->n;
	prev_head = (*head);
	(*head) = (*head)->next;
	free(prev_head);

	return (data);
}
