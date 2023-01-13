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
	unsigned int len_s1 = 0, len_s2 = 0, i;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		len_s1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len_s2++;
	}

	if (n >= len_s2)
	{
		n = len_s2;
	}

	concat_str = (char *)malloc((len_s1 + n + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		concat_str[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		concat_str[len_s1 + i] = s2[i];
	}

	concat_str[len_s1 + n] = '\0';

	return (concat_str);
}
