#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: head of the node
 * @index: index of the list where to add new node
 * @n: data for the node
 *
 * Return: address of the new node, or NULL on fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node;
	listint_t *tmp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	tmp = *head;
	i = 0;
	if (*head == NULL && index > 0)
	{
		free(new_node);
		return (NULL);
	}
	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (i < index - 1)
	{
		tmp = tmp->next;
		if (tmp == NULL && index - i > 0)
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
