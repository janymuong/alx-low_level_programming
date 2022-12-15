#include <stdio.h>

/**
 * main - start of program
 *
 * Return: Always 0 ()success
 */
int main(void)
{
	int fizz;

	for (fizz = 1; fizz <= 100; fizz++)
	{
		if (fizz % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (fizz % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (fizz % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", fizz);
		}
	}
	printf("\n");

	return (0);
}
