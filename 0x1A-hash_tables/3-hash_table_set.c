#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_node_create - create a key value node
 * @key: key
 * @value: value
 * Return: entry
 */
hash_node_t *hash_node_create(const char *key, const char *value)
{
	hash_node_t *entry = malloc(sizeof(hash_node_t) * 1);

	entry->key = malloc(strlen(key) + 1);

	if (value == NULL)
		entry->value = "";
	else
		entry->value = malloc(strlen(value) + 1);

	strcpy(entry->key, key);
	strcpy(entry->value, value);

	entry->next = NULL;

	return (entry);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hashtable
 * @key: key
 * @value : value
 * Return: 1 on success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 1;
	hash_node_t *prev;
	hash_node_t *entry;

/*	if (strlen(key) == 0)
		return (0);
		*/
	printf("ht size is %lu", ht->size);
	index = key_index((unsigned char *)key, ht->size);

	entry = ht->array[index];

	if (entry == NULL)
	{
		ht->array[index] = hash_node_create(key, value);
		return (1);
	}

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			if (value == NULL)
				entry->value = "";
			else
				entry->value = malloc(strlen(value) + 1);
			strcpy(entry->value, value);
			return (1);
		}

		prev = entry;
		entry = prev->next;
	}

	prev->next = hash_node_create(key, value);

	return (0);
}
