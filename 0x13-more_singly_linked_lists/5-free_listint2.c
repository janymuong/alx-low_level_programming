#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: struct pointer to first list element
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}

	*head = NULL;
}
