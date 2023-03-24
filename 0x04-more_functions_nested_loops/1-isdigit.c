#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for digit
 *
 * @c: parameter
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	for (c = 48; c <= 57; c++)
	{
		if (c == 48 && c <= 57)
			return (1);
		else
			return (0);
	}
	return (c);
}
