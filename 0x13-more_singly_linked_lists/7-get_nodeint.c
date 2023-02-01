#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of a listint_t linked list
 * @head: head of linkedlist
 * @index: index of nth node, starting at 0
 *
 * Return: the nth node of linked list NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int n = 0;

	tmp = head;
	while (n < index && tmp != NULL)
	{
		tmp = tmp->next;
		n++;
	}
	if (n != index)
		return (NULL);

	return (tmp);
}
