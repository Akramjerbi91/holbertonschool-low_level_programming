#include "hash_tables.h"
/**
 * key_index - get index by key
 * @key: key
 * @size: size of hashtable
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;
	unsigned long int slot = hash_djb2(key);

	index = slot % size;

	return (index);
}

