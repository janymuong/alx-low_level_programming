#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * at index of a dlistint_t linked list
 *
 * @head: double pointer to the head of the linked list
 * @index: index of the node to delete (starting from 0)
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index; i++)
		current_node = current_node->next;
	if (current_node == NULL)
		return (-1);

	current_node->prev->next = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = current_node->prev;
	free(current_node);

	return (1);
}
