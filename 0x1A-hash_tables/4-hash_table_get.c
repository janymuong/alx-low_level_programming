#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a h-table key
 * @ht: pointer to the hash table you want to look into
 * @key: the key for look up
 *
 * Return: value associated with the key
 *	or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *h_node;

	if (!ht || !key || !*key)
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	h_node = ht->array[index];

	while (h_node)
	{
		if (!strcmp(h_node->key, key))
			return (h_node->value);
		h_node = h_node->next;
	}

	return (NULL);
}
