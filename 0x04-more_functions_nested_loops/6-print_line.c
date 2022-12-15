#include "main.h"

/**
 * print_line - print line in terminal
 *
 * @n: number of '_' chars to print
 *
 * Return: void
 */

void print_line(int n)
{
	int cli;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (cli = 0; cli < n; cli++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
