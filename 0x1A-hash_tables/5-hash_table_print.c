#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int comma_flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		for (; node != NULL; node = node->next)
		{
			if (comma_flag != 0)
				printf(", ");
			printf("\'%s\':\'%s\'", node->key, node->value);
			comma_flag = 1;
		}
	}
	printf("}\n");
}
