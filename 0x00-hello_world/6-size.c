#include <stdio.h>

/**
 * main - Entry point
 * sizeof op
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character;
	int integer;
	long int longInt;
	long long int longLongInt;
	float floatNum;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(character));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longInt));
	printf("Size of a long long int: %lu byte(s)\n",
	(unsigned long)sizeof(longLongInt));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatNum));

	return (0);
}
