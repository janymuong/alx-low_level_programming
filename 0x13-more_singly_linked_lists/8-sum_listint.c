#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;

	while (head)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);
}
