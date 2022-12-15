#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: char from stdin
 * Return: 1 if c is uppercase, and 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
