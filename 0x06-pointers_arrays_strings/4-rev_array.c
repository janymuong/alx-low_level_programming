#include "main.h"

/**
  * reverse_array - reverse an (int) array
  * @a: pointer to array ds
  * @n: number of array elements
  *
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
