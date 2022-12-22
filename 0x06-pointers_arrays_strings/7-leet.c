#include "main.h"

/**
  * leet - encode string chars into 1337
  * @c: pointer to char array
  *
  * Return: encoded (str) c
  */
char *leet(char *c)
{
	char *str = "aeotlAEOTL";
	char *digits = "4307143071";

	int i, j;

	i = 0;

	while (c[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (c[i] == str[j])
				c[i] = digits[j];
		}

		i++;
	}

	return (c);
}
