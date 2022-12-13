#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char c = 'a', z = 'z';

		while (c <= z)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
