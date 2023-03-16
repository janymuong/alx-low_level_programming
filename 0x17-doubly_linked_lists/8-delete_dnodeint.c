#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * at index of a dlistint_t linked list
 *
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = current_node->next;
		if (current_node->next != NULL)
			current_node->next->prev = NULL;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index && current_node != NULL; i++)
		current_node = current_node->next;

	if (current_node == NULL)
		return (-1);

	tmp = current_node;
	current_node->prev->next = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = current_node->prev;
	free(tmp);

	return (1);
}
