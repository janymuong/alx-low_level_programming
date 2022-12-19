#include "main.h"

/**
  * swap_int - swapsv alues of two int pointer variables
  * @a: pointer to firs var
  * @b: pointer to second var
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int swap = *b;
	*b = *a;
	*a = swap;
}
