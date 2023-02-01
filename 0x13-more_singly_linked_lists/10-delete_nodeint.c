#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 *
 * @head: pointer to list to delete from
 * @index: index of the node that should be deleted, starts at 0
 *
 * Return: 1 on success, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp;
	unsigned int i = 0;

	if (!(*head))
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (; current && i < index - 1; i++)
		current = current->next;
	if (!current || !(current->next))
		return (-1);
	tmp = current->next;
	current->next = current->next->next;
	free(tmp);

	return (1);
}
