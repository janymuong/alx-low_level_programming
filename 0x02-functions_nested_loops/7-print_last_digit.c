#include "main.h"

/**
  * print_last_digit - print last digit from a char stream
  * @n: multi-digit number
  * Return: Returns last digit
  */
int print_last_digit(int n)
{
	int lit;

	lit = (n % 10);

	if (lit < 0)
	{
		lit = ((-1) * lit);
	}

	_putchar(lit + '0');
	return (lit);
}
