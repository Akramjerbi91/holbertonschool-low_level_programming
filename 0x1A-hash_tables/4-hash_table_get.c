#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - get value by key
 * @ht: hashtable
 * @key: key
 * Return: key value otherwise NULL if key doesnt exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 1;
	hash_node_t *entry;

	index = key_index((unsigned char *)key, ht->size);
	entry = ht->array[index];

	if (entry == NULL)
		return (NULL);

	while (entry != NULL)
	{
	if (strcmp(entry->key, key) == 0)
		return (entry->value);
	entry = entry->next;
	}

	return (NULL);
}
