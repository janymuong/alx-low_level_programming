#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _calloc - allocate memory w/ malloc like calloc
  * @nmemb: size bytes of allocation
  * @size: size of array
  *
  * Return: pointer to malloc
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
