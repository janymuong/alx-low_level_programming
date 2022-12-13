#include "main.h"

/**
 * function print_alphabet - prints the alphabet owercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a', z = 'z';

	/* loop through the alphabet */
	while (c <= z)
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
