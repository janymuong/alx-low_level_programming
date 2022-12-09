#include <stdio.h>
#include <stdlib.h>

/**
  * main - Code entry point
  * Print lowercase alphabet
  * Return: Return 0 after execution
  */
int main(void)
{
	char c = 'a';
	char z = 'z';

	/* loop through the alphabet */ 
	for (; c <= z; c++)
	{
		putchar(c);
	}
	
	putchar('\n');

	return (0);
}
