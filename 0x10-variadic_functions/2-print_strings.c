#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *current_string;
	unsigned int i = 0;

	va_start(args, n);
	for (; i < n; i++)
	{
		current_string = va_arg(args, char *);
		if (current_string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current_string);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
