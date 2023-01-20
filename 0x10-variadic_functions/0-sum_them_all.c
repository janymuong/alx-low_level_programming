#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of args passed to the function
 *
 * Return: sum args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (; i < n; i++)
	{
		sum += va_arg(args, const unsigned int);
	}

	va_end(args);
	return (sum);
}
