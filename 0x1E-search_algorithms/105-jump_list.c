#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 *	jump search algorithm.
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located,
 *	or NULL if the value is not present or if the list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, prev = 0;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	jump_step = sqrt(size);
	jump = list;
	while (jump->index < size && jump->n < value)
	{
		node = jump;
		for (prev = 0; jump->next && prev < jump_step; prev++)
			jump = jump->next;
		printf("Value checked at index [%lu] = [%d]\n",
				jump->index, jump->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			node->index, jump->index);

	jump = node;
	while (jump && jump->index < size && jump->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				jump->index, jump->n);
		if (jump->n == value)
			return (jump);
		jump = jump->next;
	}

	return (NULL);
}
