#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curent_node;

	while (head != NULL)
	{
		curent_node = head;
		head = head->next;
		free(curent_node);
	}
}
