#include <stdio.h>
#include "main.h"

/**
  * *_atoi - function that convert a string to an integer
  *
  * @s: a pointer to char variable
  *
  * Return: Nothing
  */
int _atoi(char *s)
{
	int symbol = 1;
	unsigned int number = 0;

	do {
		if (*s == '-')
			symbol *= -1;

		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');

		else if (number > 0)
			break;
	} while (*s++);


	return (number * symbol);
}
