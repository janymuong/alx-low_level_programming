#include "lists.h"

/**
 * dlistint_len - print the number of elements
 * in a linked dlistint_t list
 *
 * @h: head node of the doubly linked list
 *
 * Return: count of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		len_nodes++;
	}

	return (len_nodes);
}
