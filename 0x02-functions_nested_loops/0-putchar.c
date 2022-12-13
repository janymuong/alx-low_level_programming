#include "main.h"

/**
 * main - Entry point
 * function _putchar()-print char str
 * '_putchar' w/ while loop
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *strg = "_putchar";

	while (*strg)
	{
		_putchar(*strg);
		strg++;
	}
	_putchar('\n');

	return (0);
}
