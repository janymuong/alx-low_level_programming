#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cha;
	int num;
	long num2;
	long long numLo;
	float flo;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(cha));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(num2));
	printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(numLo));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(flo));

	return (0);
}
