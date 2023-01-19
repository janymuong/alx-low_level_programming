#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - add two ints
  * @a: first integer
  * @b: second integer
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - diff two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: effective diff
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - times two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - a/b
  * @a: first arg
  * @b: second arg
  *
  * Return: div result
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - get modulus int
  * @a: first integer
  * @b: second integer
  *
  * Return: a%b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
