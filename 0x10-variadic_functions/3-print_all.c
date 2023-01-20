#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 * Return: anything
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int n = 0, i = 0;
	char *ap = ", ";
	char *str;

	va_start(args, format);

	while (format && format[i])
		i++;
	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			ap = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), ap);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), ap);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), ap);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, ap);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(args);
}
