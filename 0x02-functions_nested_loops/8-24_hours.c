#include "main.h"

/**
  * jack_bauer - print minutes
  *
  * Return: Returns null
  */
void jack_bauer(void)
{
	int hrs = 0;

	for (; hrs < 24; hrs++)
	{
		int m = 0;

		for (; m < 60; m++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
        }
}
