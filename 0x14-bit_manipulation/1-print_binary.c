#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints in base 2
 *
 * @n: parameter for argumnent to be printed
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	print_binary(n / 2);
	_putchar(n % 2 + '0');
}
