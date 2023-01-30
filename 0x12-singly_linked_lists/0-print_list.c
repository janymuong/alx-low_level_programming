#include "lists.h"

/**
 * print_list - print all the elements of a list_t list
 * @h: pointer to head of singly likned list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		node_count++;
	}

	return (node_count);
}
