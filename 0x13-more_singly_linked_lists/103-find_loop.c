#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer to the head node
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *walking_ptr = head, *jumping_ptr = head;

	while (walking_ptr && jumping_ptr && jumping_ptr->next)
	{
		walking_ptr = walking_ptr->next;
		jumping_ptr = jumping_ptr->next->next;

		if (walking_ptr == jumping_ptr)
		{
			while (head != walking_ptr)
			{
				head = head->next;
				walking_ptr = walking_ptr->next;
			}
			return (walking_ptr);
		}
	}

	return (NULL);
}
