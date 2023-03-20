#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - locates a occurrence of bytes in a string
  * @s: base string pointer
  * @accept: pointer to chars to look up
  *
  * Return: pointer to the byte in s or null on err
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return (NULL);
}
