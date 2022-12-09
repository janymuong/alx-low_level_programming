#include <stdio.h>
#include <stdlib.h>

/**
  * main - Code entry point
  * Print lowercase alphabet - reverse
  * Return: Return 0 after execution
  */
int main(void)
{
	char c = 'z';

	/* loop through the alphabet */
	for (; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
