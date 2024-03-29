#include <string.h>
#include "lists.h"

/**
 * _str_len - counts and return the number of characters in a string
 *
 * @str: the string which chracaters are to be counted
 *
 * Return: the length of the given string
 */
int _str_len(const char *str)
{
	int char_count = 0;

	while (*str++)
		char_count++;

	return (char_count);
}

/**
 * add_node_end - Add a new node at the end of a list_t list
 *
 * @head: pointer to the head of the list
 * @str: the string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	char *dup_str;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	dup_str = strdup(str);

	if (!dup_str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = _str_len(str);
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;

		while (last_node->next)
			last_node = last_node->next;

		last_node->next = new_node;
	}

	return (new_node);
}
