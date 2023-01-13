#include <stdlib.h>
#include "main.h"

/**
  * string_nconcat - concatenates two strings
  * @s1: pointer to base string
  * @s2: pointer to second string
  * @n: size bytes of s2
  *
  * Return: pointer to concat string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, i;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * (len + 1));
	if (concat_str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; s1[i]; i++)
		concat_str[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		concat_str[len++] = s2[i];

	concat_str[len] = '\0';

	return (concat_str);
}
