#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints last digit of a number
 *
 * @n: parameter passed to function
 *
 * Return: return last digit
 */
int print_last_digit(int n)
{
	int q;

	if (n < 0)
	{
		n = (n * -1);
	}
	q = (n % 10);
	_putchar(q + '0');

	return (q);
}
