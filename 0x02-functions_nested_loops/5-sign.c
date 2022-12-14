#include "main.h"

/**
  * print_sign - print sign for int
  * @n: int to check
  *
  * Return: Returns 1 for positive, 0 for exactly 0, -1 for negative
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar("+");
		return (1);
	}
	else if (n == 0)
	{
		_putchar("0");
		return (0);
	}
	else
	{
		_putchar("-");
		return (-1);
	}
}
