#include "main.h"

/**
 * _pow_recursion - prints x raise to power y
 *
 * @x: number to find its power
 * @y: power to be found
 *
 * Return: x raise to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
