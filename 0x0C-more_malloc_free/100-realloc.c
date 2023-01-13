#include <stdlib.h>
#include "main.h"

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: pointer to the memory previously allocated with a call to malloc()
  * @old_size: bytes size of the allocated space for ptr
  * @new_size: byte size of the new memory block
  *
  * Return: pointer to new memory;
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_size, i = 0;
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	copy_size = (old_size < new_size) ? old_size : new_size;
	for (; i < copy_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (new_ptr);
}
