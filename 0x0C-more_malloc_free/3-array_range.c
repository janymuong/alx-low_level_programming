#include <stdlib.h>
#include "main.h"

/**
  * array_range - creates an array of integers.
  * @min: minumum integer array member
  * @max: max
  *
  * Return: pointer to array
  */
int *array_range(int min, int max)
{
	int i = 0, *array_ints, size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	array_ints = malloc(sizeof(*array_ints) * size);
	if (array_ints == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		array_ints[i] = min + i;
	}

	return (array_ints);
}
