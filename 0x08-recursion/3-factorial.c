#include "main.h"

/**
  * factorial - compute the factorial of a signed int recursively
  * @n: base integer
  *
  * Return: returns factorial
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
