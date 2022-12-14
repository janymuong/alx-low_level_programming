#include "main.h"

/**
  * print_sign - Print sign of integer
  * @n: char to check
  *
  * Return: Returns 1 for n graeter than 0, -1 for less than 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);

	}
}
