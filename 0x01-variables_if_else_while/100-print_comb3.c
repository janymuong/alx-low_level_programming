#include <stdlib.h>
#include <stdio.h>

/**
  * main - Code entry point
  * not mine.
  * Return: Return 0 after execution
  */
int main(void)
{
	int i, j;
	int k = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = k; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}

			if (i == j)
				continue;

			if (i == '8' && j == '9')
				break;

			else
			{
				putchar(',');
				putchar(' ');
			}
		}

		k++;
	}

	putchar('\n');

	return (0);
}
