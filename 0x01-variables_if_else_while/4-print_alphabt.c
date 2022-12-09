#include <stdio.h>
#include <stdlib.h>

/**
  * main - Code entry point
  * pritn alphabet no e and q
  * Return: Return 0 after execution
  */
int main(void)
{
	
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	
	putchar('\n');

	return 0;
}
