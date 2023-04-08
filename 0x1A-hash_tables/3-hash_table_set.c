#include "hash_tables.h"

/**
 * hash_table_set - insert an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: the key to add to the node
 * @value: the value to add to the node
 *
 * Return: a pointer to the newly created node, or NULL on fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *h_node = NULL, *head = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}

	h_node = malloc(sizeof(hash_node_t));
	if (h_node == NULL)
		return (0);

	h_node->key = strdup(key);
	h_node->value = strdup(value);
	h_node->next = ht->array[index];
	ht->array[index] = h_node;

	return (1);
}
