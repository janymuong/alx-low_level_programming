#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: base string pointer
  * @c: look up char
  *
  * Return: pointer to s on success or null on err
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
		return (s);

	return ('\0');
}
