#include <stdio.h>
#include <stdlib.h>

/**
  * main - Code entry point
  * pritn combinat - 2 -digit int < 99 
  * Return: Return 0 after execution
  */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i == j) continue;
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
