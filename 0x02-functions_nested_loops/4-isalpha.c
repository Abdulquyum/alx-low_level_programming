#include "main.h"

/**
 * _isalpha - Check if a parameter is alphabet either uppercase or lowercase
 *
 * @c: parameter passed
 *
 * Return: returns 1 if para is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
