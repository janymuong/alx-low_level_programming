#include <stdio.h>

/**
 * main
 * Description: use of sizeof() operator
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int num;
	long num2;
	long long test;
	float fl;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(num2));
	printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(test));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fl));

	return (0);
}
