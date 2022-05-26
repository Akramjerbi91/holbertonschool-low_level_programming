#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hashtable = malloc(sizeof(hash_table_t) * 1);

	hashtable->array = malloc(sizeof(hash_node_t) * size);

	for (; i < size; ++i)
	{
	hashtable->array[i] = NULL;
	}

	return (hashtable);
}
