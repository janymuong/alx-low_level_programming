#include "main.h"

/**
 * print_alphabet - prints the alphabet owercase
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
