#include "3-calc.h"

/**
 * op_add - +
 * @a: arg 1.
 * @b: arg 2.
 * Return: The Result.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - '-'
 * @a: arg 1.
 * @b: arg 2.
 * Return: The Result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - *
 * @a: arg 1.
 * @b: arg 2.
 * Return: The Result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - /
 * @a: arg 1.
 * @b: arg 2.
 * Return: The Result.
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - %
 * @a: arg 1.
 * @b: arg 2.
 * Return: The Result.
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
