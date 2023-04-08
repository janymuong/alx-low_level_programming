#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: (pointer to) hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *h_node, *tmp_node;

	if (ht == NULL)
		return;

	for (; i < ht->size; i++)
	{
		h_node = ht->array[i];
		while (h_node)
		{
			tmp_node = h_node->next;
			free(h_node->key);
			free(h_node->value);
			free(h_node);
			h_node = tmp_node;
		}
	}

	free(ht->array);
	free(ht);
}
