#include "main.h"

/**
 * _abs - Prints absolute number
 *
 * @n: parameter passed to function
 *
 * Return: an integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
