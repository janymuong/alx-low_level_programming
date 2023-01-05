#include "main.h"

int len_s(char *s);
int pal_check(char *s, int c);

/**
  * len_s - determine len of string
  *
  * @s: string pointer
  *
  * Return: length of string
  */
int len_s(char *s)
{
	if (*s == '\0')
		return (1);

	else
		return (1 + len_s(s + 1));
}

/**
  * pal_check - check for palindrome
  *
  * @s: string pointer
  * @c: temp local variable for len
  *
  * Return: 1 if true - 0 if false
 */
int pal_check(char *s, int c)
{
	if (*s == *(s + c))
	{
		if (c <= 0)
			return (1);
		else
			return (pal_check(s + 1, c - 2));
	}
	else
		return (0);
}

/**
  * is_palindrome - check whether string is a palindrome
  *
  * @s: pointer to sring
  *
  * Return: Returns 1 if if true 0 if false
  */
int is_palindrome(char *s)
{
	int len_x;

	len_x = len_s(s) - 1;
	return (pal_check(s, len_x - 1));
}
