#include <stdio.h>
#include <stdlib.h>

/**
  * main - Code entry point
  * Print OxXX Hexadecimal
  * Return: Return 0 after execution
  */
int main(void)
{
	int i;

	/* Loop through all numbers from 0 to 15 (inclusive) */
	for (i = 0; i < 16; i++)
	{
		/*convert to base 16*/
		putchar(i < 10 ? i + '0' : i - 10 + 'a');
	}

	putchar('\n');

	return (0);
}
