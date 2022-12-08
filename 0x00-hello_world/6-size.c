i#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main
 * use of sizeof() operator
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
    	printf("Size of a long int: %zu bytes\n", sizeof(long));
	printf("Size of a long long: %zu bytes\n", sizeof(long long));
    	printf("Size of a float: %zu bytes\n", sizeof(float));

	return (0);
}
