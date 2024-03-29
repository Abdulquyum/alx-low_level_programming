#include "calc.h"

/**
 * op_add - addition of two numbers
 *
 * @a: first argument
 * @b: second argument
 *
 * Return: result
 */
int op_add(int a, int b)
{
		return (a + b);
}

/**
 * op_sub - subtraction of two numbers
 *
 * @a: first argument
 * @b: second argument
 *
 * Return: result
 */
int op_sub(int a, int b)
{
		return (a - b);
}

/**
 * op_mul - multiplication of two numbers
 *
 * @a: first argument
 * @b: second argument
 *
 * Return: result
 */
int op_mul(int a, int b)
{
		return (a * b);
}

/**
 * op_div - division of two numbers
 *
 * @a: first argument
 * @b: second argument
 *
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (0);
	else
		return (a / b);
}

/**
 * op_mod - modulo of two numbers
 *
 * @a: first argument
 * @b: second argument
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (0);
}
