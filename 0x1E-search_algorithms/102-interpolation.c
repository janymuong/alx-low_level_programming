#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 *	Interpolation search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where the value is located,
 *	or -1 if the value is not present or if the array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, low = 0, pos;

	if (array == NULL || size == 0)
		return (-1);

	for (pos = size - 1; pos >= low;)
	{
		i = low + (((double)(pos - low) / (array[pos] - array[low])) *
				(value - array[low]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);

		if (array[i] > value)
			pos = i - 1;
		else
			low = i + 1;
	}

	return (-1);
}
