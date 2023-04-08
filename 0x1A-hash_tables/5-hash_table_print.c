#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table in format ('<key>': '<value>')
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *h_node;
	int is_first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		h_node = ht->array[i];
		while (h_node)
		{
			if (!is_first)
				printf(", ");
			printf("'%s': '%s'", h_node->key, h_node->value);
			is_first = 0;
			h_node = h_node->next;
		}
	}

	printf("}\n");
}
