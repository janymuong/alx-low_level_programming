#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the hash table on success,
 *		else Null for problems.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i = 0;

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);

	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}

	for (; i < size; i++)
	{
		h_table->array[i] = NULL;
	}

	return (h_table);
}
