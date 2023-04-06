#include "main.h"

int _squareRoot(int n, int y);

/**
 * _sqrt_recursion - displays natural square root of a number
 *
 * @n: parameter for number passed
 *
 * Return: Returns -1 if n lacks square root.
 */
int _sqrt_recursion(int n)
{
	return (_squareRoot(n, 1));
}

/**
 * _square - returns square of two numbers
 *
 * @n: parameter for num to calculate squareRoot
 * @y: parameter for iteration
 *
 * Return: returns answer of square.
 */
int _squareRoot(int n, int y)
{
	int sqrt = y * y;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (y);
	return (_squareRoot(n, y + 1));
}

