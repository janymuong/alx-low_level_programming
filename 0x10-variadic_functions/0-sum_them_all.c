#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of args passed to the function
 *
 * Return: sum args
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	sum = i = 0;
	while (i < n)
	{
		sum = sum + va_arg(valist, int);
		i++;
	}

	va_end(valist);

	return (sum);
}
