#include "main.h"

int _compute_sqrt(int c, int guess);

/**
  * _compute_sqrt - get square roots and perfect squares by guesses
  * @guess: random picker of square roots
  * @c: base number
  *
  * Return: returns square root
  */
int _compute_sqrt(int c, int guess)
{
	if (guess * guess == c)
	{
		return (guess);
	}
	else if (guess * guess > c)
	{
		return (-1);
	}
	else
	{
		return (_compute_sqrt(c, guess + 1));
	}
}

/**
  * _sqrt_recursion - determine square roots
  * @n: base number
  *
  * Return: returns square root
  */
int _sqrt_recursion(int n)
{
	return (_compute_sqrt(n, 1));
}
