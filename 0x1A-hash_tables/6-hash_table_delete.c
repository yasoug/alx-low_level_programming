#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node, *next;

	if (!ht)
		return;

	while (index < ht->size)
	{
		node = ht->array[index];
		while (node)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
