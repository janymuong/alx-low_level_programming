#include "main.h"

/**
  * _isalpha - check for alphabetic char
  * @c: character to check
  *
  * Return: Returns 1 for alpabetic and 0 for not_alpha
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
