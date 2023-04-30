#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - prints addition of a and b
 *
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: result of addition of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - prints subtraction of a and b
 *
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: result of subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - prints muliple of a and b
 *
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: result of multiple of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - prints division of a and b
 *
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: result of division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - prints modulo of a and b
 *
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: result of modulo a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
