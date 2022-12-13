#include "main.h"

/**
  * _islower - print aphabet if lowercase
  * @c: character to check
  *
  * Return: Returns 1 for lowercase and 0 for uppercase
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
