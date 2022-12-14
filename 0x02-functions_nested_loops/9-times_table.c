#include "main.h"

/**
  * times_table - print 9-table
  *
  * Return: Returns nulll
  */
void times_table(void)
{
	int i, j, ret;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			ret = (i * j);
			if ((ret / 10) > 0)
			{
				_putchar((ret / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((ret % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
