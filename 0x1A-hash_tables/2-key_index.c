#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: The key to find the index for.
 * @size: The size of the array of the hash table.
 *
 * Description: Uses the djb2 algorithm to compute the hash value
 * of a key and then the index in the array of the hash table.
 * Return: The index at which the key/value pair should be stored
 * in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val = hash_djb2(key);

	return (hash_val % size);
}

