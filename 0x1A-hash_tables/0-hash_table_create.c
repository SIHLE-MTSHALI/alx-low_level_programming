#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array of the hash table.
 *
 * Description: Allocates memory for a new hash table and its array,
 * initializing each array element to NULL.
 * Return: A pointer to the new hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->size = size;
	return (ht);
}

