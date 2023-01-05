#include "main.h"

/**
  * _pow_recursion - compute power of numbers recursively
  * @x: first integer
  * @y: sccond number
  *
  * Return: pow
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
