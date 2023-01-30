#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: struct pointer to first list element
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);

	free(head->str);
	free(head);
}
