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
	int len_s1 = 0, len_s2 = 0, concat_len, j, i;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;
	len_s2++;

	concat_len = len_s1 + len_s2;
	concat_str = malloc(sizeof(char) * concat_len);
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concat_str[i] = s1[i];

	for (j = 0; i <= concat_len; i++, j++)
		concat_str[i] = s2[j];

	return (concat_str);
}
