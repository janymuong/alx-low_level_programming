#include <stdio.h>

void fizz_buzz(void);

/**
 * main - start of program
 *
 * prints Fizz for multiples of 3 
 * pritns Buzz for multiples of 5 
 * prints FizzBuzz for multiples of 5 & 3
 *
 * Return: Always 0 ()success
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - print from 1 thro' 100
 *
 * Return - void
 */
void fizz_buzz(void)
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
}
