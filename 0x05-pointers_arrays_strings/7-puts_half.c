#include "main.h"

/**
  * puts_half - function that prints half of a string, followed by a new line
  *
  * @str: a pointer the string we want to print
  *
  * Return: Nothing
  */
void puts_half(char *str)
{
	int count = 0;
	int i, newStart;

	while (str[count] != '\0')
		count++;

	if (count % 2 == 0)
		newStart = count / 2;

	else
		newStart = (count - 1) / 2;

	i = count - newStart;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}

	_putchar('\n');
}
