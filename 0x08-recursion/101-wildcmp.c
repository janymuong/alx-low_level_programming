#include "main.h"

/**
  * wildcmp - compare strings and/or wildcards
  * @s1: pointer to base string
  * @s2: pointer to sceond string
  *
  * Return: returns 1 if true and 0 on err
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
