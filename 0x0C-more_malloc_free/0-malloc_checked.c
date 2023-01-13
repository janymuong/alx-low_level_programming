#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - allocates memory using malloc()
  * @b: integer to allocate memory for.
  *
  * Return: (void)pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
