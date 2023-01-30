#include "lists.h"

/**
 * add_node - creates new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string needs to be duplicated
 *
 * Return: pointer to new node, NULL if false
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len;

	if (str == NULL)
		return (NULL);

	len = 0;

	while (str[len])
		len++;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
