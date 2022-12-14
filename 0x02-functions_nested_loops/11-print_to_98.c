#include "main.h"
#include "stdio.h"

/**
  * print_to_98 - print thro' 98
  * @n: starting index
  * Return: Returns nulll
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}

	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}

	else
	{
		printf("98");
	}

	printf("%d\n", n);
}
