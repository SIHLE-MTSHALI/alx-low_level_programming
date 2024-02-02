#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, a string, the key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 *
 * Description: This struct is for each node in the hash table that
 * stores a key/value pair and a pointer to next node in case of a collision.
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size, each cell of this array is a pointer
 * to the first node of a linked list because we want our HashTable to
 * use a chaining collision handling
 *
 * Description: This struct is for the hash table itself, containing an
 * array to hold the heads of linked lists (to handle collisions) and
 * the size of the array.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */

