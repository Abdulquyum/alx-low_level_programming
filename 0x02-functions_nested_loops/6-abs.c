#include "main.h"
#include <stdio.h>

/**
 * _abs - computes absolute value of an interger
 *
 * @q: parameter
 *
 * Return: Always 0.
 */
int _abs(int q)
{
	if (q >= 0)
	{
		return (q);
	}
	else
	{
		return (q * -1);
	}
}
