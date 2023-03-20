#include "main.h"
#include <stdio.h>

/**
  * *_strstr - locates a occurrence of substr in a string
  * @haystack: base string pointer
  * @needle: pointer to chars to substring
  *
  * Return: pointer to located substring, or NULL on err
  */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *h = haystack;
			char *n = needle;

			while (*h != '\0' && *n != '\0' && *h == *n)
			{
				h++;
				n++;
			}
			if (*n == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
