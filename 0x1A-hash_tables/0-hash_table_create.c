#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table and returns apointer
 * to it
 *
 * @size: is the size of the array of hash_node_t
 *
 * Return: a pointer to the newly created has table or NULL if
 * it failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t *ptr_array;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	ptr_array = malloc(sizeof(ptr_array) * size);

	if (ptr_array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	ht->array = &ptr_array;

	return (ht);
}
