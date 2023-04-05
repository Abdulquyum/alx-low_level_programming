#include "main.h"

/**
 * factorial - showcase the factorial of a given number
 *
 * @n: parameter of number passed
 *
 * Return: if n is lower than 0, error should be indicated or nothing.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
