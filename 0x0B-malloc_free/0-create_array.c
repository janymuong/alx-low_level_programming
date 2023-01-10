#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * *create_array - creates an array of chars, and initializes it with a char.
  * @size: specifies the size of the array
  * @c: value to initialize the array with
  *
  * Return: pointer to the array if true, NULL/1 if false
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
	{
		printf("Error allocating memory!\n");
		return (NULL);
	}
	for (; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
