#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 *	Jump search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: no. of elements in the array
 * @value: value to search for
 *
 * Return: index where the value is located,
 *	or -1 if the value is not present or if the array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = sqrt(size);
	size_t prev = 0, next;

	if (array == NULL)
		return (-1);

	while (array[prev] < value)
	{
		next = prev + jump_step;

		if (next >= size)
			break;

		printf("Value checked array[%lu] = [%d]\n",
				next, array[next]);

		if (array[next] >= value)
			break;

		prev = next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev, prev + jump_step);

	while (array[prev] < value)
	{
		prev++;

		if (prev == size)
			return (-1);

		printf("Value checked array[%lu] = [%d]\n",
				prev, array[prev]);

		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
