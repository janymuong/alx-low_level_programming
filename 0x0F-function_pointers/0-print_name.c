#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print pointer args that points to function referenced
 * @name: pointer char name
 * @f: function pointer arg
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
