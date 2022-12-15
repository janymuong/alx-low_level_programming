#include "main.h"

/**
 * _isdigit - check for digit character
 * @c: char from stdin
 * Return: 1 if c is digit, and 0 if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
