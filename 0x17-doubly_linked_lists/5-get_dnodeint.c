#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: (pointer) head of the list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node, if node exists
 *         NULL, if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current_node = head;

	for (i = 0; i < index && current_node != NULL; i++)
		current_node = current_node->next;

	if (i == index)
		return (current_node);

	return (NULL);
}
