#include "main.h"

/**
  * _strncpy - copy str to str
  * @dest: pointer to destination string
  * @src: pointer to source string
  * @n: from stdin
  *
  * Return: (str) dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
