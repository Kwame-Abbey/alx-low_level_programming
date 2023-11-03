#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: NULL or key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (; ht->array[index]; index++)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
	}

	return (NULL);
}
