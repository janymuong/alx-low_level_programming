#include "lists.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: head node of the doubly linked list
 *
 * Return: count of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_count++;
	}

	return (nodes_count);
}
