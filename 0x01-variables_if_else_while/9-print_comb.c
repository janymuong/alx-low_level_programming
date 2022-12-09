#include <stdio.h>
#include <stdlib.h>

/**
  * main - Code entry point
  * Print lowercase alphabet
  * Return: Return 0 after execution
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
