#include "main.h"

/**
 * more_numbers - print numbesr
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
        	{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
        	}
		j++;
		_putchar('\n');
	}
}
