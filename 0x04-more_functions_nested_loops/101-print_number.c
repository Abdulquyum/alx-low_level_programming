#include "main.h"

/**
 * print_number - Prints any number
 *
 * @n: parameter passed to be printed
 *
 * Return: Nothing
 */
void print_number(int n)
{
	if (n < 0 && n >= -9)
	{
		_putchar('-');
		n = -n;
		_putchar(n + '0');
	}
	else if (n < -9 && n >= -99)
	{
		_putchar('-');
		n = -n;
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 0 && n < 10)
		_putchar(n + '0');
	else if (n >= 10 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 1000)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
