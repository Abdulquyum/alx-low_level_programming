#include "main.h"

/**
 * find_sqrt - help find sqrt
 *
 * @num: searching parameter
 * @sqrt: guessing number
 *
 * Return: sqare root (Success)
 */
int find_sqrt(int num, int sqrt)
{
	if ((sqrt * sqrt) > num)
		return (-1);

	if ((sqrt * sqrt) == num)
		return (sqrt);

	return (find_sqrt(num, sqrt + 1));
}

/**
 * _sqrt_recursion - Prints square root of a number
 *
 * @n: parameter for number
 *
 * Return: answer for square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}
