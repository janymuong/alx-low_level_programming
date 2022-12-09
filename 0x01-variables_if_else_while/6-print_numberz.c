#include <stdio.h>
#include <stdlib.h>

/**
  * main - Code entry point
  * print int
  * Return: Return 0 after execution
  */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
