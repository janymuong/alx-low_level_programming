#include "main.h"

/**
  * print_number - Prints number
  * @n: number passed in for check
  */
void print_number(int n)
{
	unsigned int num;

	num = n;

	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar('0' + (num % 10));

}
