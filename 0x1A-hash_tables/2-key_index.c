#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 * @key: The key to find the index for.
 * @size: The size of the array of the hash table.
 *
 * Description: Uses the djb2 algorithm to hash the key and then
 * calculates the index in the hash table array where the
 * key/value pair should be stored.
 * Return: The index at which the key/value pair should be stored
 * in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash;

    hash = hash_djb2(key);
    return (hash % size);
}

