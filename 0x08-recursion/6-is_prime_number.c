#include "main.h"

int is_prime_check(int c, int i);

/**
 * is_prime_check - dxtmine if
 * @c: char(s) from stdin
 * @i: divisor for the f(n)
 *
 * Return: 1 if tests passes 0 on err
 */
int is_prime_check(int c, int i)
{
	if (i == 1)
		return (1);
	if (c % i == 0)
		return (0);
	else
		return (is_prime_check(c, i - 1));
}

/**
 * is_prime_number - determines whether integer is prime
 * @n: integer from stdin
 *
 * Return: returns 1 on success 0 on err
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (is_prime_check(n, n / 2) > 0)
		return (1);
	return (0);
}
