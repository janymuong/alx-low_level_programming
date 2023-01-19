#include <stdlib.h>
#include "function_pointers.h"

/**
  * int_index - searches for an integer.
  *
  * @size: number of elements in the array array
  * @cmp: pointer to the function to be used to compare values
  * @array: integer array to iterate on
  *
  * Return: returns the index of the first element
  * for which the cmp function does not return 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0) 
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
