#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: a string pointer
  *
  * Return: returns max len
  */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
