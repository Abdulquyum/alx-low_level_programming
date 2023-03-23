#include "main.h"

/**
 * _isupper -checks for uppercase letters
 *
 * @c: parameter passed
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	for (c = 65; c <= 90; c++)
	{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		else
			return (0);
	}
	return (c);
}
