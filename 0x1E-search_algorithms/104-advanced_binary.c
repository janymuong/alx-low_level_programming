#include "search_algos.h"

int _advanced_binary_recursive(int *array, size_t low, size_t high, int value);

/**
 * _advanced_binary_recursive - recursive helper function for advanced_binary
 *
 * @array: pointer to the first element of the array to search in
 * @low: lowest index of the subarray
 * @high: highest index of the subarray
 * @value: the value to search for
 *
 * Return: index where the value is located,
 *	or -1 if the value is not present in the subarray.
 */
int _advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		else
			return (_advanced_binary_recursive(array,
						low, mid, value));
	}
	else if (array[mid] < value)
		return (_advanced_binary_recursive(array,
					mid + 1, high, value));
	else
		return (_advanced_binary_recursive(array, low, mid, value));
}

/**
 * advanced_binary - searches for a value in a sorted array
 *	advanced binary search
 *
 * @array: pointer to the first element of the array to search in
 * @size: no. of elements in the array
 * @value: the value to search for
 *
 * Return: index where the value is located,
 *	or -1 if the value is not present or if the array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (_advanced_binary_recursive(array, 0, size - 1, value));
}
