#include "main.h"

/**
  * rev_string - didn't code this will do tomorrow
  *
  * @s: a pointer the string we want to print
  *
  * Return: Nothing
  */
void rev_string(char *s)
{
	int count = 0;
	int i, len;
	char holder;

	while (s[count] != '\0')
		count++;

	len = count - 1;

	for (i = 0; i < count / 2; i++)
	{
		holder = s[i];
		s[i] = s[len];
		s[len--] = holder;
	}
}
