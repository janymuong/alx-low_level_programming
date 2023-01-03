#include "main.h"

/**
  * _memset - fills the 1st n bytes of the mem area w/ const byte b
  * @s: pointer to char array
  * @b: char conts byte
  * @n: max size of char str
  *
  * Return: pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

    return (s);
}
