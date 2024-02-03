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
 * Description: Nodes in the hash table storing key-value pairs and
 * a pointer to handle collisions through chaining.
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
 * to the first node of a linked list, chaining for collision resolution.
 *
 * Description: The hash table structure, containing an array to manage
 * collisions and track the size of the table.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);



#endif /* HASH_TABLES_H */

