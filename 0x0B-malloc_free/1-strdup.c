#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - creates an array of chars, and initializes it with a char.
  * @str: pointer to array of chars
  *
  * Return: pointer to a newly allocated space in memory
  */
char *_strdup(char *str)
{
	char *string;
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;
	size++;

	string = malloc(sizeof(char) * size);
	for (; i < size; i++)
	{
		string[i] = str[i];
	}
	return (string);
}
