#include "main.h"

/**
  * string_toupper - returns UPPERCASE strings
  * @str: pointer to source string
  *
  * Return: (str)
  */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return str;
}
