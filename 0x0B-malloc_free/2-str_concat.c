#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * str_concat - concatenate two string
  * @s1: pointer to base string
  * @s2: pointer to second string
  *
  * Return: pointer to new str
  */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len_s1 = 0, len_s2 = 0, concat_len, i = 0;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = "";
	}

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;
	len_s2++;

	concat_len = len_s1 + len_s2;

	concat = malloc(sizeof(char) * concat_len);

	if (concat == NULL)
	{
		return (NULL);
	}
	for (; i < len_s1; i++)
		concat[i] = s1[i];

	for (; i < len_s2; i++)
		concat[i] = s2[i];

	return (concat);
}
