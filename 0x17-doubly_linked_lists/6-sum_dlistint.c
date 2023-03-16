#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list
 *
 * @head: pointer head of the list
 *
 * Return: sum of all data, or sum 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;

	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);
}
