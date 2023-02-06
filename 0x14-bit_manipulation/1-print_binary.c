#include "main.h"

/**
 * print_binary - prints the binary representation of a base 10 int
 * @n: int from stdin
 *
 * Return: the converted number in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}
