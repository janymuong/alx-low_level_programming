#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: number of ints passed to the function
 *
 * Return: args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num;
	unsigned int i = 0;

	va_start(args, n);

	for (; i < n; i++)
	{
		num = va_arg(args, int);
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);
		}
		printf("%d", num);
	}

	va_end(args);
	printf("\n");
}
