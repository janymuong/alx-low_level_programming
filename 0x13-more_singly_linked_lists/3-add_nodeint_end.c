#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of a listint_t list
 * @head: (pointer) head of list
 * @n: data to add
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;
	current->next = new_node;

	return (new_node);
}
