#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added (starting at 0)
 * @n: data of the new node to be added
 *
 * Return: the address of the new node, or NULL if it failed
 *         if adding gails, return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current_node = *h;
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
		current_node = current_node->next;

	if (i != idx - 1)
		return (NULL);

	if (current_node == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current_node;
	new_node->next = current_node->next;
	current_node->next = new_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
