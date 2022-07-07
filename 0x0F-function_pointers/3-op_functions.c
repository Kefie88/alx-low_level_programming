#include "3-calc.h"
/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: summation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction
 * @a: first integer
 * @b: second integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: first integer
 * @b: second integer
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: first int
 * @b: second int
 * Return: dividend
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
 * op_mod - modulus
 * @a: first int
 * @b: second int
 * Return: modulus
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

