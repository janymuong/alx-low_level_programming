#include "hash_tables.h"

/**
 * key_index - a function that retrieves the index of a key.
 *
 * @key: is the key for retrieval
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h_value;
	unsigned long int index;

	h_value = hash_djb2(key);
	index = h_value % size;

	return (index);
}
