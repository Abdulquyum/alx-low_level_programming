#include "main.h"

/**
 * print_sign - Prints operational sign
 *
 * @n: parameter passed
 *
 * Return: return 1 for success, otherwise 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}