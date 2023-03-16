#include "lists.h"

/**
 * add_dnodeint_end - adds a new node
 * at the end of a dlistint_t list
 *
 * @head: pointer to the head node of the list
 * @n: data value of the new node
 *
 * Return: (pointer) address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *current_node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	current_node = *head;
	while (current_node->next)
		current_node = current_node->next;

	current_node->next = node;
	node->prev = current_node;

	return (node);
}
