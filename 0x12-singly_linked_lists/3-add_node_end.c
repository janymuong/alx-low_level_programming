#include "lists.h"

/**
 * add_node_end - adds new_node to end of a list_t list
 * @head: pointer to first node element
 * @str: pointer to string to duplicate
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;
	int i = 0, node_count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (; str[i] != '\0'; i++)
		node_count++;

	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
