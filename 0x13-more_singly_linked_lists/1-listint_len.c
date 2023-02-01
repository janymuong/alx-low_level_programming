#include "lists.h"

/**
 * listint_len - prints linked list type listint_t
 * @h: pointer to head of linked list
 *
 * Return: count of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
