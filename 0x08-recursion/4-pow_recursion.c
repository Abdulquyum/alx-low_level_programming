#include "main.h"

/**
 * _pow_recursion - displays value of x raised to the power of y
 *
 * @x: parameter for return value
 * @y: parameter for power
 *
 * Return: Returns -1 if y < 0, else returns x.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}
