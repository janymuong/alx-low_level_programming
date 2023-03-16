#include "lists.h"

/**
 * add_dnodeint - adds a new node at the head of a dlistint_t list
 *
 * @head: pointer to pointer to the head node of the list
 * @n: data value to be stored in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head)
		(*head)->prev = node;

	*head = node;

	return (node);
}
