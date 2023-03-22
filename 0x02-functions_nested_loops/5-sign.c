#include "main.h"

/**
 * print_sign - prints signs.
 *
 * @n: parameter
 *
 * Return: always zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return (0);
	}
	_putchar('\n');
}
