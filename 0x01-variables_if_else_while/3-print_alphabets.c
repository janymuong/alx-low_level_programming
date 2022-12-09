#include <stdio.h>
#include <stdlib.h>

/**
  * main - Code entry point
  * Print ALPHABET - putchar and while loop
  * Return: Return 0 after execution
  */
int main(void)
{
	char c = 'a';
	char a = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	/* Print the alphabet in uppercase */
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	
	putchar('\n');
	
	return (0);
}
