#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list_t list
 * @h: pointer to the head of the linked list
 *
 * Return: count of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
