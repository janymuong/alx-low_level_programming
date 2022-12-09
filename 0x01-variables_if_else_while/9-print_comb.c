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
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar('0' + i);
			putchar(',');
			putchar('0' + j);
			putchar('\n');
		}
	}

	return (0);
}
