#include "main.h"

/**
  * set_string - sets the value of a pointer to a char
  * @s: base string pointer
  * @to: pointer to char to initialize s to
  *
  * Return: void
  */
void set_string(char **s, char *to)
{
	*s = to;
}
