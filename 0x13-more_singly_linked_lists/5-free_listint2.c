#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: struct pointer to first list element
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *tmp_node;

	current_node = *head;

	while (current_node != NULL)
	{
		tmp_node = current_node;
		current_node = current_node->next;
		free(tmp_node);
	}

	*head = NULL;
}
