#include "main.h"

/**
 * print_number - cprints an integer
 * @n: char from stdin
 * Return: void
 */
void print_number(int n)
{
	unsigned int nu;

	nu = n;

	if (n < 0)
	{
		_putchar(45);
		nu *= -n;
	}

	if (nu / 10)
		print_number(nu / 10);

	_putchar(nu % 10 + '0');

}
