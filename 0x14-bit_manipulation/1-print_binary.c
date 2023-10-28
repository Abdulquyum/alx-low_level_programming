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
	unsigned long int mask, q;
	
	for (q = 0; mask > 0; mask <<= 1, q++)
	{
		if (n == 0)
			return;

		else if (n == 1)
			return;

		n >>= 1;

		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}
