#include "main.h"

/**
  * print_last_digit - print last digit from a cahr stream
  * @lastDigit: int to check
  *
  * Return: Returns lastDigit
  */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = (-1) * lastDigit;
	}

	_putchar(lastDigit + '0');
	return lastDigit;
}
